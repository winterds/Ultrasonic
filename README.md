# HC-SR04 (Ultrasonic Module)

HC-SR04 เป็นโมดูลที่ใช้วัดระยะทางแบบไม่สัมผัสด้วยคลื่น Ultrasonic มีราคาถูก และใช้พลังงานต่ำ โดยจะมีการทำงานคือ

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

__ตัวอย่าง__ ต่อ Trigger pin กับ Echo pin ของ HC-SR04 ที่ Pin 12 และ 13 ดังภาพ

![HC-SR04 with Arduino](pics/arduino-ultrasonic.jpg)

### :sound: Author / ผู้เขียน
1. นายจักรวาล อินทรัตน์ชัยกิจ (พี่กีตาร์)
2. นายศรัณญ์ หาญทองคำ (พี่วินเนอร์)
