# Gameport to USB HID Adapter

This is a sketch for Arduino Micro based on an example from MHeironimus' [ArduinoJoystickLibrary](https://github.com/MHeironimus/ArduinoJoystickLibrary)

## Pinout

| Gameport Pin | Arduino Pin | Pull        |
|--------------|-------------|-------------|
| 1            | +5V         |             |
| 2            | D9          | 10K to 5V   |
| 3            | A0          | 100K to GND |
| 4            | GND         |             |
| 5            | GND         |             |
| 6            | A1          | 100K to GND |
| 7            | D10         | 10K to 5V   |
| 8            | n/c         |             |
| 9            | +5V         |             |
| 10           | D12         | 10K to 5V   |
| 11           | A2          | 100K to GND |
| 12           | GND         |             |
| 13           | A3          | 100K to GND |
| 14           | D11         | 10K to 5V   |
| 15           | n/c         |             |

This pinout is based on [this design from built-to-spec.com](http://www.built-to-spec.com/blog/2009/09/10/using-a-pc-joystick-with-the-arduino/)

![a circuit diagram matching the table](http://www.built-to-spec.com/blog/wp-content/uploads/2009/09/Joystick-Dongle1.png)
