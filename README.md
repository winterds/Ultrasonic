# HC-SR04 (Ultrasonic Module)
HC-SR04 เป็นโมดูลที่ใช้วัดระยะทางแบบไม่สัมผัสด้วยคลื่น Ultrasonic มีราคาถูก และใช้พลังงานต่ำ

![HC-SR04](pics/hc-sr04.jpg)

### :sound: Specifications / ข้อมูลเชิงเทคนิค :

| Electrical Parameters | HC-SR04 Ultrasonic Module                        |
|:---------------------:|--------------------------------------------------|
|   Operating Voltage   | DC-5V                                            |
|   Operating Current   | 15mA                                             |
|  Operating Frequency  | 40KHZ                                            |
|     Farthest Range    | 4m                                               |
|     Nearest Range     | 2cm                                              |
|    Measuring Angle    | 15 Degree                                        |
|  Input Trigger Signal | 10us TTL pulse                                   |
|   Output Echo Signal  | Output TTL level signal, proportional with range |
|       Dimensions      | 45mm x 20mm x 15mm                               |

โดยในที่นี้ เราจะใช้ Library ชื่อ Ultrasonic ของ Erick Simões ซึ่งสามารถลงได้ 2 วิธี
1. Sketch > Include Library > Manage Library... ค้นหา "Ultrasonic" และ Install library "Ultrasonic by Erick Simões"
2. Sketch > Include Library > Add .ZIP Library... เลือกไฟล์ Ultrasonic-master.zip โดยสามารถ Download ผ่าน https://github.com/ErickSimoes/Ultrasonic

### :sound: Wiring / การต่อวงจร
It is very easy to connect an ultrasound module to the Arduino. For example, if you are using HC-SR04, connect the trigger and echo pin module on pin 12 and 13 of the Arduino, respectively. As in the picture: 

![HC-SR04 with Arduino](pics/arduino-ultrasonic.jpg)
