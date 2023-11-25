#include <iostream>
using namespace std;
int main()
{
    double Fat, Calo;
    double FpC = Fat * 9;
    double Per = FpC / Calo;
    cout << "Nhap vao luong Calo: ";
    cin >> Calo;
    if(Calo <= 0)
    {
        cout << "Nhap lai Calo: ";
        cin >> Calo;
    }
    cout << "Nhap vao luong chat beo: ";
    cin >> Fat;
    if (Fat <= 0)
    {
        cout >> "Nhap lai luong chat beo: ";
        cin >> Fat;
    }
    if (FpC > Calo)
    {
        cout << "luong chat beo hay calo bi sai";
    }
    if (Per < 0.3)
    {
        cout << "Thuc pham nay it chat beo: ";
    }
    else
    {
        cout << "Pham tram chat beo: " << Per <<endl;
     }
}