# STM32_TM1650_PlatformIO
STM32 + TM1650 overview

Unfortunately PIO uses outdated stm32flash version which knows nothing about relatively new STM32G030 MCU. To be able to upload firmware to STM32G030 please update stm32flash manually to newer version and put here:
C:\Users\{UserName}\.platformio\packages\tool-stm32duino\stm32flash

Latest stm32flash can be found here:
https://sourceforge.net/projects/stm32flash/


Upload firmware to your STM32G030:
* In platformio.ini file change line with COM port to your COM port
* run command `C:\Users\{USER}\.platformio\penv\Scripts\platformio.exe run --target upload`