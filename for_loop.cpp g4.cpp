#include <iostream> //เรียกใช้งานไลบรารี
using namespace std; 

int main() { //เริ่มโปรแกรม

   // for loop to print "Hi" 5 times
    for (int i = 0; i < 10; i++) { //loopทำงานจนไม่เข้าเงื่อนไข i<10 แล้วหยุดทำงาน
       cout << "Hi => i = " << i << endl; //แสดง Hi พร้อมค่าของ i
    }
  
    return 0; //จบการทำงาน
}