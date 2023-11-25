#include <iostream>
using namespace std;
int main()
{
    string name1, name2, name3, time1, time2, time3;
    double high1, high2, high3;
    cout << "Ten van dong vien thu nhat: ";
    getline(cin, name1);
    cout << "Ten van dong vien thu hai: ";
    getline(cin, name2);
    cout << "Ten van dong vien thu ba: ";
    getline(cin, name3);
    cout << "Thoi gian 1: ";
    getline(cin, time1);
    cout << "Thoi gian 2: ";
    getline(cin, time2);
    cout << "Thoi gian 3: ";
    getline(cin, time3);
    cout << "Do cao " << name1 << " dat duoc: ";
    cin >> high1;
    if(high1 <= 2.0 && high1 >= 5.0)
    {
        cout << "Do cao khong hop le.\n";
    }
    cout << "Do cao " << name2 << " dat duoc: ";
    cin >> high1;
    if(high2 <= 2.0 && high2 >= 5.0)
    {
        cout << "Do cao khong hop le.\n";
    }
    cout << "Do cao " << name3 << " dat duoc: ";
    cin >> high3;
    if(high3 <= 2.0 && high3 >= 5.0)
    {
        cout << "Do cao khong hop le.\n";
    }

    if (high1 > high2 && high1 > high3)
    {
        cout << "Thu nhat: " << name1 << " " << time1 << " " << high1 << endl;
        if (high2 > high3)
        {
            cout << "Thu hai: " << name2 << " " << time2 << " " << high2 << endl;
            cout << "Thu ba: " << name3 << " " << time3 << " " << high3 << endl;
        }
        else
        {
            cout << "Thu hai: " << name3 << " " << time3 << " " << high3 << endl;
            cout << "Thu hai: " << name2 << " " << time2 << " " << high2 << endl;
        }
    }
    else  if (high2 > high1 && high2 > high3)
    {
        cout << "Thu nhat: " << name2 << " " << time2 << " " << high2 << endl;
        if (high1 > high3)
        {
            cout << "Thu hai: " << name1 << " " << time1 << " " << high1 << endl;
            cout << "Thu ba: " << name3 << " " << time3 << " " << high3 << endl;
        }
        else 
        {
            cout << "Thu hai: " << name3 << " " << time3 << " " << high3 << endl;
            cout << "Thu hai: " << name1 << " " << time1 << " " << high1 << endl;
        }
    }
    else
    {
        cout << "Thu nhat: " << name3 << " " << time3 << " " << high3 << endl;
        if (high2 > high1)
        {
            cout << "Thu hai: " << name2 << " " << time2 << " " << high2 << endl;
            cout << "Thu ba: " << name1 << " " << time1 << " " << high1 << endl;
        }
        else 
        {
            cout << "Thu hai: " << name1 << " " << time1 << " " << high1 << endl;
            cout << "Thu hai: " << name2 << " " << time2 << " " << high2 << endl;
        }
    }
}