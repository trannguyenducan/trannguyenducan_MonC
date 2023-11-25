// Chuong trinh tinh gia cua 5 mat hang
#include <iostream>
using namespace std;
int main()
{
    // Khai bao bien va gan gia cho 5 mat hang
    double Hang1 = 15.95;
    double Hang2 = 24.95;
    double Hang3 = 6.95;
    double Hang4 = 12.95;
    double Hang5 = 3.95;
    // Tinh tong so tien ban hang va tien thue (7%)
    double TongHang = Hang1 + Hang2 + Hang3 + Hang4 + Hang5;
    double Thue = TongHang * 0.07;
    // Tong so tien (Ca thue)
    double Tong = TongHang + Thue;
    // Xuat ra gia tri
    cout << "Gia cua mat hang 1: " << Hang1 << "$" << endl;
    cout << "Gia cua mat hang 2: " << Hang2 << "$" << endl;
    cout << "Gia cua mat hang 3: " << Hang3 << "$" << endl;
    cout << "Gia cua mat hang 4: " << Hang4 << "$" << endl;
    cout << "Gia cua mat hang 5: " << Hang5 << "$" << endl;
    cout << "Tong tien hang: " << TongHang << "$" << endl;
    cout << "Tong so thue mat hang: " << Thue << "$" << endl;
    cout << "Tong so tien: " << Tong << "$" << endl;
    return 0;
}