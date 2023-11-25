#include <iostream>
using namespace std;
int main()
{
    string runner1, runner2, runner3;
    double time1, time2, time3;
    cout << "Ten van dong vien 1: ";
    getline(cin, runner1);
    cout << "Ten van dong vien 2: ";
    getline(cin, runner2);
    cout << "Ten van dong vien 3: ";
    getline(cin, runner3);

    cout << "Thoi gian hoan thanh cua " << runner1 << " (giay): ";
    cin >> time1;
    if (time1 < 0)
    {
        cout << "Khong kha dung. Vui long nhap lai: ";
        cin >> time1;
    }
    cout << "Thoi gian hoan thanh cua " << runner2 << " (giay): ";
    cin >> time2;
    if (time2 < 0)
    {
        cout << "Khong kha dung. Vui long nhap lai: ";
        cin >> time2;
    }
    cout << "Thoi gian hoan thanh cua " << runner3 << " (giay): ";
    cin >> time3;
    if (time3 < 0)
    {
        cout << "Khong kha dung. Vui long nhap lai: ";
        cin >> time3;
    }
    if (time1 < time2 && time1 < time3) {
        cout << "Dung thu nhat: " << runner1 << endl;
        if (time2 < time3) {
            cout << "Dung thu hai: " << runner2 << endl;
            cout << "Dung thu ba: " << runner3 << endl;
        } else {
            cout << "Dung thu hai: " << runner3 << endl;
            cout << "Dung thu ba: " << runner2 << endl;
        }
    } else if (time2 < time1 && time2 < time3) {
        cout << "Dung thu nhat: " << runner2 << endl;
        if (time1 < time3) {
            cout << "Dung thu hai: " << runner1 << endl;
            cout << "Dung thu ba: " << runner3 << endl;
        } else {
            cout << "Dung thu hai: " << runner3 << endl;
            cout << "Dung thu ba: " << runner1 << endl;
        }
    } else {
        cout << "Dung thu nhat: " << runner3 << endl;
        if (time1 < time2) {
            cout << "Dung thu hai: " << runner1 << endl;
            cout << "Dung thu ba: " << runner2 << endl;
        } else {
            cout << "Dung thu hai: " << runner2 << endl;
            cout << "Dung thu ba: " << runner1 << endl;
        }
    }
    return 0;
}