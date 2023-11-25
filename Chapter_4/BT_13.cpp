#include <iostream>
using namespace std;
int main()
{
    int SL, Diem;
    cout << "Nhap so luong sach da mua: ";
    cin >> SL;
    if (SL == 0)
    {
        Diem = 0;
    }
    else if (SL == 1)
    {
        Diem = 5;
    }
    else if (SL == 2)
    {
        Diem = 15;
    }
    else if (SL == 3)
    {
       Diem = 30;
    }
    else
    {
        Diem = 40;
    }
    cout << "Quy khach tich duoc: " << Diem << endl;
    return 0;
}