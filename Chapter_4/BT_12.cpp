#include <iostream>
using namespace std;
int main()
{
    int SL;
    double Giam, Gia;
    cout << "Nhap so luong da ban: ";
    cin >> SL;
    if (SL <= 0)
    {
        cout << "Nhap lai so luong: ";
        cin >> SL;10
    }
    else if (SL >=1 && SL <= 9)
    {
        Gia = (SL * 99);
    }
    else if (SL >= 10 && SL <= 19)
    {
        Giam = SL * 99 * 0.02;
        Gia = (SL * 99) - Giam;
    }
    else if (SL >= 20 && SL <= 49)
    {
        Giam = SL * 99 * 0.03;
        Gia = (SL * 99) - Giam;
    }
    else if (SL >= 50 && SL <= 99)
    {
        Giam = SL * 99 * 0.04;
        Gia = (SL * 99) - Giam;
    }
    else
    {
        Giam = SL * 99 * 0.05;
        Gia = (SL * 99) - Giam;
    }
    cout << "Tong chi phi: $ " << Gia << endl;
    return 0;
}