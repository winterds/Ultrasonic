// ลง Library Ultrasonic https://github.com/ErickSimoes/Ultrasonic
#include <Ultrasonic.h> 

// กำหนด Ultrasonic ให้ชื่อ ultrasonic
// โดยให้ Trigger pin [เป็น input สร้างคลื่น] คือ 12 และ Echo pin [เป็น output รับคลื่น] คือ 13
Ultrasonic ultrasonic(12, 13); 

// กำหนดตัวแปรประเภท int ชื่อ distance ใช้ในการเก็บค่าระยะห่างที่อ่านได้จาก Ultrasonic HC-SR04
int distance; 

void setup() {
  // กำหนด Serial monitor ที่ใช้ในการสือสารมีค่า baud rate อยู่ที่ 9600 
  Serial.begin(9600); 
}

void loop() {
  // ultrasonic.read(CM) เป็น function ที่ return ค่าระยะทางที่วัดได้ในหน่วยเซนติเมตร(cm)
  // ในกรณีที่อยากได้ค่าระยะทางในหน่วยนิ้ว ให้ใช้ ultrasonic.read(INC) แทน
  distance = ultrasonic.read(CM); 
  
  // แสดงค่า distance ออกผ่านทาง Serial monitor
  Serial.print("Distance in CM: "); 
  Serial.println(distance);
  
  // หน่วงเวลา 1.0 วินาที
  delay(1000); 
}
