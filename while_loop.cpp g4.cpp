#include <iostream>
using namespace std;

int main() { //เริ่มโปรแกรม
  
  	// while loop to print numbers from 1 to 5
    int i = 1; //ตั้งตัวแปร i เริ่มที่5
    while (i <= 5) { //เงื่อนไขถ้า i <= 5 
        cout << "Hi  => i = " << i << endl; //แสดงhi พร้อมกับค่าi
        i++; // i =i+1  i+1ไปเรื่อยๆ
    }

    return 0; //จบการทำงาน
}