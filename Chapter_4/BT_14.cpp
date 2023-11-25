#include <iostream>
using namespace std;
int main()
{
    double TK;
    double Tong = 10.0;
    int SL;
    cout << "Nhap so du tai khoan: $";
    cin >> TK;
    if (TK < 0)
    {
        cout << "Tai khoan bi rut qua muc.\n";
        return 1;
    }

    if (TK > 0 && TK < 400.0)
    {
        Tong += 15.0;
    }

    cout << "So tam sec da viet: ";
    cin >> SL;
    if (SL < 0)
    {
        cout << "So luong tam sec khong kha dung.\n";
        return 1;
    }
    if (SL < 20)
    {
        Tong += SL * 0.10;
    }
    else if (SL < 40)
    {
        Tong += SL * 0.08;
    }
    else if (SL < 60)
    {
        Tong += SL * 0.06;
    }
    else
    {
        Tong += SL * 0.04;
    }
    cout << "Tong phi dich vu hang thang: " << Tong << endl;
    return 0;
}