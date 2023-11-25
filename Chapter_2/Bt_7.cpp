// Chuong trinh du doan muc do tang cua mat nuoc bien
#include <iostream>
using namespace std;
int main()
{
    // Khai bao bien va gan gia tri 
    float HangNam = 1.5;
    // Tinh muc tang trong 5, 7, 10 nam nua
    float NamNam = HangNam * 5;
    float BayNam = HangNam * 7;
    float MuoiNam = HangNam * 10;
    // Xuat ra ket qua
    cout << "Muc tang trong 5 nam nua: " << NamNam << " mm" << endl;
    cout << "Muc tang trong 7 nam nua: " << BayNam << " mm" << endl;
    cout << "Muc tang trong 10 nam nua: " << MuoiNam << " mm" << endl;
    return 0;
}