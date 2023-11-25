// Chuong trinh tinh quang duong di duoc tren moi gallon xang
#include <iostream>
using namespace std;
int main()
{
    // Khai bao va gan gia tri cua quang duong di duoc voi moi luong xang
    float Duong = 375; // Quang duong di duoc
    float Xang = 15; // Luong xang co trong xe
    // Tinh quang duong di duoc voi luong xang
    float Mpg = Duong / Xang;
    // Xuat ra ket qua
    cout << "So dam di duoc voi moi gallon xang (MPG) la: " << Mpg << " MPG" << endl;
    return 0;
}