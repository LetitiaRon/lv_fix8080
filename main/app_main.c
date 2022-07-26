#include "app_main.h"

static const char *TAG = "Main";

SemaphoreHandle_t xGuiSemaphore;

esp_mqtt_client_handle_t client;

int Test_num = 0;
double Test_Temp = 20.1;
static const int RX_BUF_SIZE = 1024;
static char buffer[1024]; /* 暂时存储从串口接收到的字符串 */
/* MQTT (over TCP) Example
   This example code is in the Public Domain (or CC0 licensed, at your option.)
   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
static esp_err_t mqtt_event_handler_cb(esp_mqtt_event_handle_t event)
{
    esp_mqtt_client_handle_t client = event->client;
    int msg_id;
    // your_context_t *context = event->context;
    switch (event->event_id)
    {
    case MQTT_EVENT_CONNECTED:
        ESP_LOGI(TAG, "MQTT_EVENT_CONNECTED");
        /* 发布一条主题为“fc_boardstatus” 的消息 */
        msg_id = esp_mqtt_client_publish(client, "/sys/a1D0VCyeFNT/phone/thing/service/property/post", "data_3", 0, 1, 0);
        ESP_LOGI(TAG, "sent publish successful, msg_id=%d", msg_id);
        /* 订阅主题为“fc_ctrlcmd” 的消息 */
        msg_id = esp_mqtt_client_subscribe(client, "/sys/a1D0VCyeFNT/phone/thing/service/property/post", 0);
        ESP_LOGI(TAG, "sent subscribe successful, msg_id=%d", msg_id);

        break;
    case MQTT_EVENT_DISCONNECTED:
        ESP_LOGI(TAG, "MQTT_EVENT_DISCONNECTED");
        break;

    case MQTT_EVENT_SUBSCRIBED:
        ESP_LOGI(TAG, "MQTT_EVENT_SUBSCRIBED, msg_id=%d", event->msg_id);
        msg_id = esp_mqtt_client_publish(client, "/topic/qos0", "data", 0, 0, 0);
        ESP_LOGI(TAG, "sent publish successful, msg_id=%d", msg_id);
        break;
    case MQTT_EVENT_UNSUBSCRIBED:
        ESP_LOGI(TAG, "MQTT_EVENT_UNSUBSCRIBED, msg_id=%d", event->msg_id);
        break;
    case MQTT_EVENT_PUBLISHED:
        ESP_LOGI(TAG, "MQTT_EVENT_PUBLISHED, msg_id=%d", event->msg_id);
        break;
    case MQTT_EVENT_DATA:
        ESP_LOGI(TAG, "MQTT_EVENT_DATA");
        printf("TOPIC=%.*s\r\n", event->topic_len, event->topic);
        printf("DATA=%.*s\r\n", event->data_len, event->data);
        break;
    case MQTT_EVENT_ERROR:
        ESP_LOGI(TAG, "MQTT_EVENT_ERROR");
        break;
    default:
        ESP_LOGI(TAG, "Other event id:%d", event->event_id);
        break;
    }
    return ESP_OK;
}

static void mqtt_event_handler(void *handler_args, esp_event_base_t base, int32_t event_id, void *event_data)
{
    ESP_LOGD(TAG, "Event dispatched from event loop base=%s, event_id=%d", base, event_id);
    mqtt_event_handler_cb(event_data);
}

static void mqtt_app_start(void)
{
    esp_mqtt_client_config_t mqtt_cfg = {
        .host = "a1D0VCyeFNT.iot-as-mqtt.cn-shanghai.aliyuncs.com", //CONFIG_BROKER_URL,//根据实际填写
        .port = 1883,
        .username = "phone&a1D0VCyeFNT",                                                              //根据实际填写
        .password = "24968bfa12702c52d46a8e7a712b2f3e46b31a3ca56c3801cb224381d897615c",               //根据实际填写
        .client_id = "a1D0VCyeFNT.phone|securemode=2,signmethod=hmacsha256,timestamp=1653151265628|", //根据实际填写

    };
#if CONFIG_BROKER_URL_FROM_STDIN
    char line[128];

    if (strcmp(mqtt_cfg.uri, "FROM_STDIN") == 0)
    {
        int count = 0;
        printf("Please enter url of mqtt broker\n");
        while (count < 128)
        {
            int c = fgetc(stdin);
            if (c == '\n')
            {
                line[count] = '\0';
                break;
            }
            else if (c > 0 && c < 127)
            {
                line[count] = c;
                ++count;
            }
            vTaskDelay(10 / portTICK_PERIOD_MS);
        }
        mqtt_cfg.uri = line;
        printf("Broker url: %s\n", line);
    }
    else
    {
        ESP_LOGE(TAG, "Configuration mismatch: wrong broker url");
        abort();
    }
#endif /* CONFIG_BROKER_URL_FROM_STDIN */

    client = esp_mqtt_client_init(&mqtt_cfg);
    esp_mqtt_client_register_event(client, ESP_EVENT_ANY_ID, mqtt_event_handler, client);
    esp_mqtt_client_start(client);
}

/*RTOS任务*/
static void lv_tick_task(void *arg)
{
    (void)arg;
    lv_tick_inc(portTICK_PERIOD_MS);
}

static void gui_task(void *arg)
{
    xGuiSemaphore = xSemaphoreCreateMutex();
    /*lvgl内核初始化*/
    lv_init();
    /*屏幕初始化*/
    gpio_set_direction(12, GPIO_MODE_OUTPUT);
    gpio_set_level(12, 1); //并口屏的REST脚（1使能）
    lv_port_disp_init();

    /*freertos注册*/
    esp_register_freertos_tick_hook(lv_tick_task);

    ui_init();
    // setup_ui();
    // lv_mydemo();
    // lv_demo_widgets();
    // lv_demo_music();
    // lv_demo_benchmark();
    // lv_demo_stress();
    // lv_demo_keypad_encoder();
    while (1)
    {
        /* Delay 1 tick (assumes FreeRTOS tick is 10ms */
        vTaskDelay(pdMS_TO_TICKS(10));
        /* Try to take the semaphore, call lvgl related function on success */
        if (pdTRUE == xSemaphoreTake(xGuiSemaphore, portMAX_DELAY))
        {
            lv_timer_handler();
            xSemaphoreGive(xGuiSemaphore);
        }
    }
}

static void date_refresh_task(void *arg)
{
    while (1)
    {
        char buf[30];
        vTaskDelay(100 / portTICK_PERIOD_MS);
        // Test_num += 1;
        // Test_Temp += 0.1;
        // if (Test_num == 220)
        // {
        //     Test_num = 0;
        // }
        // if (Test_Temp >= 24)
        // {
        //     Test_Temp = 20.2;
        // }
        // sprintf(buf, "%d v", Test_num);
        // lv_label_set_text(ui_Label2, buf);
        // sprintf(buf, "%.1lf C", Test_Temp);
        // lv_label_set_text(ui_Label8, buf);
    }
}

static void mqtt_task(void *arg)
{
    int msg_id;
    ESP_LOGI(TAG, "[APP] Startup..");
    ESP_LOGI(TAG, "[APP] Free memory: %d bytes", esp_get_free_heap_size());
    ESP_LOGI(TAG, "[APP] IDF version: %s", esp_get_idf_version());

    esp_log_level_set("*", ESP_LOG_INFO);
    esp_log_level_set("MQTT_CLIENT", ESP_LOG_VERBOSE);
    esp_log_level_set("MQTT_EXAMPLE", ESP_LOG_VERBOSE);
    esp_log_level_set("TRANSPORT_TCP", ESP_LOG_VERBOSE);
    esp_log_level_set("TRANSPORT_SSL", ESP_LOG_VERBOSE);
    esp_log_level_set("TRANSPORT", ESP_LOG_VERBOSE);
    esp_log_level_set("OUTBOX", ESP_LOG_VERBOSE);

    ESP_ERROR_CHECK(nvs_flash_init());
    ESP_ERROR_CHECK(esp_netif_init());
    ESP_ERROR_CHECK(esp_event_loop_create_default());

    /* This helper function configures Wi-Fi or Ethernet, as selected in menuconfig.
     * Read "Establishing Wi-Fi or Ethernet Connection" section in
     * examples/protocols/README.md for more information about this function.
     */
    ESP_ERROR_CHECK(example_connect()); //使用通过连接函数连接互联网

    mqtt_app_start(); /*mqtt 初始化*/

    while (1)
    {
        /* 每隔10s 发布一次 主题为 “phone“ 的消息 */
        // msg_id = esp_mqtt_client_publish(client, "/sys/a1D0VCyeFNT/phone/thing/service/property/post", "56", 7, 0, 0);
        // ESP_LOGI(TAG, "sent publish successful, msg_id=%d", msg_id);
        vTaskDelay(10000 / portTICK_PERIOD_MS);
    }
}

void init(void)
{
    const uart_config_t uart_config = {
        .baud_rate = 115200,
        .data_bits = UART_DATA_8_BITS,
        .parity = UART_PARITY_DISABLE,
        .stop_bits = UART_STOP_BITS_1,
        .flow_ctrl = UART_HW_FLOWCTRL_DISABLE,
        .source_clk = UART_SCLK_APB,
    };
    // We won't use a buffer for sending data.
    uart_driver_install(UART_NUM_0, RX_BUF_SIZE * 2, 0, 0, NULL, 0);
    uart_param_config(UART_NUM_0, &uart_config);
    //uart_set_pin(UART_NUM_0, TXD_PIN, RXD_PIN, UART_PIN_NO_CHANGE, UART_PIN_NO_CHANGE);
}
int sendData(const char *logName, const char *data)
{
    const int len = strlen(data);
    const int txBytes = uart_write_bytes(UART_NUM_0, data, len);
    //ESP_LOGI(logName, "Wrote %d bytes", txBytes);
    return txBytes;
}
int sendData_NULL(const char *data)
{
    const int len = strlen(data);
    const int txBytes = uart_write_bytes(UART_NUM_0, data, len);
    return txBytes;
}
static void tx_task(void *arg)
{
    static const char *TX_TASK_TAG = "TX_TASK";
    esp_log_level_set(TX_TASK_TAG, ESP_LOG_INFO);
    while (1)
    {
        sendData(TX_TASK_TAG, "POWER VOTAGE CURRENT RESISTANCE\n");
        vTaskDelay(2000 / portTICK_PERIOD_MS);
    }
}
static void rx_task(void *arg)
{
    char disbuf[30]; /*显示数据缓存*/
    while (1)
    {
        //获取串口0接收的数据
        int len = uart_read_bytes(UART_NUM_0, buffer, (RX_BUF_SIZE - 1), 20 / portTICK_PERIOD_MS); /* 从串口1的RX_FIFO获取字符串 */
        /* 如果读到包的话 */
        if (len)
        {
            buffer[len] = '\0'; /* 在结尾加入字符'\0'， */

            if (buffer[0] == 'A') //首帧
            {
                Rec.Resis = buffer[1];
                Rec.Vot = buffer[2];
                Rec.Current = buffer[3];
                Rec.Power = buffer[4];
                // Rec.Resis = atoi(buffer[2]) * 10 + atoi(buffer[3]);
                // Rec.Vot = atoi(buffer[5]) * 10 + atoi(buffer[6]);
                // Rec.Current = atoi(buffer[8]) * 10 + atoi(buffer[9]);
                // Rec.Power = atoi(buffer[11]) * 10 + atoi(buffer[12]);
                sprintf(disbuf, "%c KR", Rec.Resis);
                lv_label_set_text(ui_Vot, disbuf);

                sprintf(disbuf, "%c V", Rec.Vot);
                lv_label_set_text(ui_Cur, disbuf);

                sprintf(disbuf, "%c A", Rec.Current);
                lv_label_set_text(ui_Power, disbuf);

                sprintf(disbuf, "%c W", Rec.Power);
                lv_label_set_text(ui_Res, disbuf);
            }
            else
            {
                sprintf(disbuf, buffer);
                lv_label_set_text(ui_Label2, disbuf);
            }
            // ESP_LOGI(TAG, "Recv str -> %s , and the length is:%d", buffer, strlen(buffer));            /* 打印logo */
            // ESP_LOGI(TAG, "The size of buffer is %d,and ready to clear this buffer.", sizeof(buffer)); /* 打印logo */
            memset(buffer, 0, sizeof(buffer)); /* 清空内存，等待下一次的串口保文。 */
        }
    }
}

static void Check_task(void *arg)
{

    while (1)
    {
        vTaskDelay(10 / portTICK_PERIOD_MS);
    }
}

/*app_main*/
void app_main(void)
{
    init();
    xTaskCreatePinnedToCore(rx_task, "uart_rx_task", 1024 * 2, NULL, 3, NULL, 0);
    // xTaskCreatePinnedToCore(tx_task, "uart_tx_task", 1024 * 2, NULL, 2, NULL, 0);

    xTaskCreatePinnedToCore(gui_task, "gui task", 1024 * 8, NULL, 1, NULL, 0);
    // xTaskCreatePinnedToCore(date_refresh_task, "date_refresh task", 1024 * 2, NULL, 1, NULL, 0);
    // xTaskCreatePinnedToCore(mqtt_task, "mqtt task", 1024 * 14, NULL, 2, NULL, 0);
    //xTaskCreatePinnedToCore(Check_task, "Check task", 1024 * 4, NULL, 3, NULL, 0);
}

//开关 模式 数据 3
/*总开关switch*/
//     if (event == LV_EVENT_CLICKED)
//     {
//         Switch_OF += 1;
//         if (Switch_OF == 2)
//             Switch_OF = 0;
//         switch (Switch_OF)
//         {
//         case 0:
//             lv_label_set_text(ui_Label10, "OFF");
//             sendData_NULL("OFF");//发送关闭总开关指令
//             break;
//         case 1:
//             lv_label_set_text(ui_Label10, "ON");
//             sendData_NULL("ON");//发送开启总开关指令
//             break;
//         default:
//             break;
//         }
//     }