#include <iostream>
#include <iomanip>
using namespace std;
double calculateRetail(double ChiPhi, double PhanTang) 
{
    if (ChiPhi < 0 && PhanTang < 0) {
        cout << "Error: Wholesale cost and markup percentage must be non-negative." << endl;
        return 1; 
    }
    double Le = ChiPhi * (1 + PhanTang / 100.0);
    return Le;
}

int main() 
{
    double ChiPhi, PhanTang;
    cout << "Nhap vao chi phi ban: $";
    cin >> ChiPhi;
    if (ChiPhi < 0) 
    {
        cout << "Chi phi khong kha dung.\n";
        return 1;
    }
    cout << "Nhap phan tram tang gia: ";
    cin >> PhanTang;
    if (PhanTang < 0) 
    {
        cout << "Phan tram tang gia khong kha dung.\n" << endl;
        return 1;
    }
    double Le = calculateRetail(ChiPhi, PhanTang);
    if (Le != -1.0) 
    {
        cout << fixed << setprecision(2);
        cout << "Gia ban le san pham: $" << Le << endl;
    }
    return 0;
}
