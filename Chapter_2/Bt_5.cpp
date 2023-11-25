//chuong trinh tinh gia tri trung binh cua 5 so
#include <iostream>
using namespace std;
int main()
{
    // Khai bao bien va gan gia tri cho 5 so
    float num1 = 28;
    float num2 = 32;
    float num3 = 37;
    float num4 = 24;
    float num5 = 33;
    // Tinh trung binh cua 5 so
    float TrungBinh = (num1 + num2 + num3 + num4 + num5) / 5;
    // Xuat ra gia tri 
    cout << "Gia tri trung binh cua chuoi so la: " << TrungBinh << endl;
    return 0;
}