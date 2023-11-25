#include <iostream>
using namespace std;
int main()
{
    double x;
    cout << "Nhap buoc song: ";
    cin >> x;
    if (x > (1*(10^-2)))
    {
        cout << "Buoc song thuoc vung Radio Waves.\n";
    }
    else if (x >= (1*(10^-2)) && x < (1*(10^-3)))
    {
        cout << "Buoc song thuoc vung Microwaves.\n";
    }
    else if (x >= (1*(10^-3)) && x < (7*(10^-7)))
    {
        cout << "Buoc song thuoc vung Infrared.\n";
    }
    else if (x >= (7*(10^-7)) && x < (4*(10^-7)))
    {
        cout << "Buoc song thuoc vung Visible Light.\n"
    }
    else if (x >= (4*(10^-7)) && x < (1*(10^-8)))
    {
        cout << "Buoc song thuoc vung Ultraviolet.\n";
    }
    else if (x >= (1*(10^-8)) && x < (1*(10^-11)))
    {
        cout << "Buoc song thuoc vung X-Rays.\n";
    }
    else
    {
        cout << "Buoc song thuoc vung Gamma Rays.\n";
    }
}