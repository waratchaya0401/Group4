#include<iostream> //เรียกใช้งานไลบรารี
using namespace std;

int main (){ //เริ่มโปรแรม
    int A = 0; //สร้างตัวแปรA เพื่อเก็บข้อมูล กำหนดค่าเริ่มต้น =0
    cout<<"Please enter a number to A: "<< endl; //แสดงข้อความให้ผู้ใช้พิมพ์
    cin >> A; //รับข้อมูลที่พิมพ์

    if(A<5){ //เงื่อนไขถ้าA<5 แสดงข้อความ
        cout<<"Condition met"<<endl;
    }
    
    return 0; //จบการทำงาน
}