# Arduino-camper-sensors
An arduino mega based board to monitor air quality, current usage, waste water tank level.
The board uses a BME680 sensor for temperature, pressure, humidity and VOC gas sensor.
For current it uses a INA280 current sensor
For the water level it uses tree elektrodes. Between two poles in the bottom of the tank a reference is taken to measure the condustiveness of the fluid, waste water changes conductivity. The other elektrode is a long bare wire (goldplated) and is used to measure the fluid level. 

Many of the Arduino MEGA 2560 pins are avaliable on screw terminals on the edge of the board. 7 digital lines have a ULN2003 driver output.
On the board is a 240x320 touch screen shield attached for the gui.
The schematic and PCB files are made in Eagle. The pcb is simple and single sided.
