# WeatherArduino
Скетч для Arduino, использующий датчик DHT11, измеряющий и отправляющий по порту Serial значения температуры и влажности.

Также .dll файл (и его исходники) для функции воспроизведения звука (формата .wav) по указанному пути. Пример использования в Python через библиотеку ctypes:
```
from ctypes import *
player = CDLL('arduinoDll.dll')
player.play_alarm.argtypes = [c_wchar_p]

player.play_alarm("assets/doop.wav")
```
