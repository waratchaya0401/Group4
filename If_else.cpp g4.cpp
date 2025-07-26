#include<iostream> //เรียกใช้งานไลบรารี
using namespace std;

int main() { //เริ่มต้นโปรแกรม
    int A = 0; //สร้างตัวแปรA ไว้เก็บตัวเลข ให้เริ่มต้นที่0
    cout << "Please enter a number for A: " << endl; //แสดงข้อความ
    cin >> A; //รับตัวเลขมาเก็บที่A

    if (A == 8) { // เงื่อนไขถ้าA=8
        cout << "A is 8" << endl; //ถ้า A เท่ากับ 8 ก็แสดงข้อความนี้
    } else if (A > 8) { //เงื่อนไขAมากกว่า8หรือไม่
        cout << "A is greater than 8" << endl; //ถ้าใช่แสดงข้อความ
    } else { //ถ้าไม่เข้าเงื่อนไขข้างบนให้ทำเงื่อนนี้
        cout << "A is less than 8" << endl;
    }

    return 0; //จบการทำงาน
}