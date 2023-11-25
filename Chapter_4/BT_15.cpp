#include <iostream>
using namespace std;
int main()
{
    double KL, QD, Phi;
    cout << "Khoi luong goi hang:";
    cin >> KL;
    if (KL <= 0 && KL >= 20.0)
    {
        cout << "Khoi luong goi hang vuot quy dinh.\n";
        return 1;
    }
    cout << "Quang duong giao hang: ";
    cin >> QD;
    if (QD <= 10.0 && QD >= 3000.0)
    {
        cout << "Quang duong vuot qua quy dinh.\n";
        return 1;
    }
    
    if (KL <= 2.0)
    {
        Phi = 1.10 * (QD / 500.0);
    }
    else if (KL > 2.0 && KL <= 6.0)
    {
        Phi = 2.20 * (QD / 500.0);
    }
    else if (KL > 6.0 && KL <= 10.0)
    {
        Phi = 3.70 * (QD / 500.0);
    }
    else (KL > 10 && KL <= 20)
    {
        Phi = 4.80 * (QD / 500.0);
    }
    cout << "Phi van chuyen: $" << Phi << endl;
    return 0;
}