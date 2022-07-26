
# LVGL TEMPLATE
7796+FT6236

## About ESP32

* board: ESP32-S3
* flash size: 8MB
* esp-idf: v4.4

## About LCD TFT

* LCD driver: ST7796
* LCD module: 3.5 TFT  320x480


## About LVGL

* LVGL : v8.0.0

# NOTE:

* wifi连接是用外部的example
* 在外部的cmake里面加 set(EXTRA_COMPONENT_DIRS $ENV{IDF_PATH}/examples/common_components/protocol_examples_common)



# message.payload()是接收的jason格式数据
* 格式如下
* {
*  "method":"thing.service.property.set",
*  "id":"2105943552",
*  "params":
*  {
*      "Fan":1,
*      "Watering":1,
*      "LightLux":1,
*      "Atmosphere":55,
*      "Humidity":1,
*      "co2":1,
*      "temperature":1
*  },
*  "version":"1.0.0"
* }
* 
* 云流转后的json
* topic:/sys/a1D0VCyeFNT/upper_computer/thing/service/property/set,
*   paload:
*   {
*       "deviceType":"CustomCategory",
*       "iotId":"MCkuj4sQbumHcfK8Vkw5000000",
*       "requestId":"123",
*       "checkFailedData":{},
*       "productKey":"a1D0VCyeFNT",
*       "gmtCreate":1652542815625,
*       "deviceName":"MCU1",
*       "items":
*       {
*           "Fan":
*           {
*               "time":1652542815623,
*               "value":0
*           },
*           "Watering":
*           {
*               "time":1652542815623,
*               "value":1
*           },
*           "LightLux":
*           {
*               "time":1652542815623,
*               "value":253
*           },
*           "Atmosphere":
*           {
*               "time":1652542815623,
*               "value":56
*           },
*           "Humidity":
*           {
*               "time":1652542815623,
*               "value":87.1
*           },
*           "co2":
*           {
*               "time":1652542815623,
*               "value":88
*           },
*           "temperature":
*           {
*               "time":1652542815623,
*               "value":22.2
*           }
*       }
*   }
