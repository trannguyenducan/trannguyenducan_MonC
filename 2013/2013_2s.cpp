#include<iostream>
using namespace std;

class base
{
public:
    ~base(){
        cout << "ham huy cua lop base" << endl;
    }
};

class derived:public base
{
public:
    ~derived(){
        cout << "ham huy cua lop derived" << endl;
    }
};

int main()
{
    base* obj = new derived();
    delete obj;
    return 0;
}