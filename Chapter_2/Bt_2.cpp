// Chuong trinh tinh doanh thu ban hang dua tren tong thu nhap cua cong ty
#include <iostream>
using namespace std;
int main()
{
    float Tong = 8.6;// Khai bao bien cho tong thu nhap cua cong ty
    float ThuNhap;// Khai bao bien cho thu nhap cua bo phan ban hang 
    ThuNhap = 0.58 * Tong;// Tao cong thuc tinh thu nhap
    cout << "Thu nhap cua bo phan ban hang: " << ThuNhap << " million" << endl;// Xuat ra ket qua 
    return 0;
}