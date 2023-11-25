// Viet chuong trinh tinh tong thue khi mua hang
#include <iostream>
using namespace std;
int main()
{
    // Khai bao bien
    float GiaBanDau = 95;
    float GiaSauThue;
    // Tinh Gia Sau Thue
    GiaSauThue = GiaBanDau * 0.02 + GiaBanDau * 0.04;
    // Xuat ra gia tri
    cout << "Gia san pham sau khi tinh thue: " << GiaSauThue << "$" << endl;
    return 0;
}