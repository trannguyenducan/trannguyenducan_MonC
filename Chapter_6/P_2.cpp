#include <iostream>
using namespace std;
double getLength();
double getWidth();
double getArea(double Dai, double Rong);
void displayData(double Dai, double Rong, double DT);
int main() 
{
    double Dai = getLength();
    double Rong = getWidth();
    double DT = getArea(Dai, Rong);
    displayData(Dai, Rong, DT);
    return 0;
}
double getLength() 
{
    double Dai;
    cout << "Nhap chieu dai hinh chu nhat: ";
    cin >> Dai;
    return Dai;
}
double getWidth() 
{
    double Rong;
    cout << "Nhap chieu rong hinh chu nhat: ";
    cin >> Rong;
    return Rong;
}
double getArea(double Dai, double Rong) 
{
    return Dai * Rong;
}
void displayData(double Dai, double Rong, double Dt) 
{
    cout << "Dien tich hinh chu nhat:" << endl;
    cout << "Chieu dai: " << Dai << " don vi" << endl;
    cout << "Chieu rong: " << Rong << " don vi" << endl;
    cout << "Dien tich: " << DT << " don vi dien tich" << endl;
}
