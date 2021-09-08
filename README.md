# Tuya IoTOS Embedded Mcu Demo Wifi Ble stm32_sht3x _wb3s

[English](./README.md) | [中文](./README_zh.md)

## Introduction  

This Demo uses the Tuya smart cloud platform, Tuya smart APP, Tuya temperature and humidity function board (SHT30)and IoTOS Embedded MCU SDK to realize a temperature and humidity acquisition.

The implemented features include:

+ Temperature And Humidity Acquisition


## Quick start  

### Compile & Burn
+ Download Tuya IoTOS Embeded Code
+ Execute the Project.uvprojx file
+ Click Compile in the software and complete the download


### File introduction 

```
├── Core
   ├── Src
       │   ├── main.c
       │   ├── gpio.c
       │   ├── i2c.c
       │   ├── usart.c
       │   ├── stm32l4xx_it.c
       │   ├── stm32l4xx_hal_msp.c
       │   ├── sht3x.c
       │   ├── connect_wifi.c
       │   ├── delay.c
    ├── Inc
       │   ├── main.h
       │   ├── gpio.h
       │   ├── i2c.h
       │   ├── usart.h
       │   ├── stm32l4xx_it.h
       │   ├── stm32l4xx_hal_conf.h
       │   ├── sht3x.h
       │   ├── connect_wifi.h
       │   ├── delay.h 
├── Drivers
   ├── CMSIS
        ├── Device
           ├──ST
              ├──STM32L4xx
        ├── Include              
   ├── STM32L4xx_HAL_Driver
        ├── Inc
        ├── Src
└── mcu_sdk
    ├── mcu_api.c
    ├── mcu_api.h
    ├── protocol.c
    ├── protocol.h
    ├── system.c
    ├── system.h
    └── wifi.h
```



### Demo entry

Entry file：main.c

Important functions：main()

+ Initialize and configure MCU USART,IIC,SHT3x sensor, etc. All events are polled and judged in while(1)。




### DataPoint related 

+ DP point processing: mcu_dp_value_update()

| function name | unsigned char mcu_dp_value_update(unsigned char dpid,unsigned long value) |
| ------------- | ------------------------------------------------------------ |
| dpid          | DP ID number                                                 |
| value         | DP data                                                      |
| Return        | SUCCESS: Success ERROR: Failure                              |



### I/O List  

|     SHT30     |  USART1  | USART2  |
| :-----------: | :------: | :-----: |
| PB10 I2C2_SCL | PA9 TXD  | PA2 TXD |
| PB11 I2C2_SDA | PA10 RXD | PA3 RXD |



## Related Documents

  Tuya Demo Center: https://developer.tuya.com/demo



## Technical Support

  You can get support for Tuya by using the following methods:

- Developer Center: https://developer.tuya.com
- Help Center: https://support.tuya.com/help
- Technical Support Work Order Center: [https://service.console.tuya.com](https://service.console.tuya.com/) 

