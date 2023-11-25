// Chuong trinh tinh tien hoa don cho bua an
#include <iostream>
using namespace std;
int main()
{
    // Khai bao bien TienAn, Thue, Tip.
    float TienAn = 88.67;
    float Thue = 0.0675;
    float Tip = 0.2;
    // Cong thuc tinh cac khoan tien
    float TienThue = TienAn * Thue;
    float PhiKhiCoThue = TienAn + TienThue;
    float TienTip = PhiKhiCoThue * Tip;
    float Tong = PhiKhiCoThue + TienTip;
    // In ra hoa don
    cout << "Chi Phi Bua An: " << TienAn << "$" << endl;
    cout << "Tien Thue: " << TienThue << "$" << endl;
    cout << "Tien Tip: " << TienTip << "$" << endl;
    cout << "Tong Hoa Don: " << Tong << "$" << endl;
    return 0;
}