// Chuong trinh tinh so mau dat tren khu dat
#include <iostream>
using namespace std;
int main()
{
    double S_KhuDat = 391.876; // Dien tich khu dat
    double S_MauDat = 43.560; // Dien tich mau dat
    // Cong thuc tinh so mau dat
    double N_MauDat = S_KhuDat / S_MauDat;
    cout << "So mau dat trong khu dat: " << N_MauDat << endl;
    return 0;
}