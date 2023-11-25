// Chuong tirnh tinh so tien mua co phieu
#include <iostream>
using namespace std;
int main()
{
    double GiaGoc = 35.00;
    char SoLuong = 350;
    double GiaBan = GiaGoc * SoLuong;
    double HoaHong = GiaBan * 0.02;
    double Tong = GiaBan + HoaHong;
    cout << "Gia co phieu chua tinh hoa hong: " << GiaBan << endl;
    cout << "Tien hoa hong: " << HoaHong << endl;
    cout << "Tong so tien: " << Tong << endl;
    return 0; 
}