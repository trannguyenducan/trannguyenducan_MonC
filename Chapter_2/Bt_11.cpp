// Chuong trinh quang duong di duoc
#include <iostream>
using namespace std;
int main()
{
    float Xang = 20; // Luong xang xe co
    float Vtown = 23.5; // Toc do trung binh cua xe trong thi tran
    float Vhigh = 28.9; // Toc do trung binh cua xe tren cao toc
    // Cong thuc tinh quang duong xe di duoc
    float Stown = Vtown * Xang;
    float Shigh = Vhigh * Xang;
    cout << "Quang duong xe di duoc trong thi tran voi mot binh xang: " << Stown << endl;
    cout << "Quang duong xe di duoc tren cao toc voi mot binh xang: " << Shigh << endl;
    return 0;
}