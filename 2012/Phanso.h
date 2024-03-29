#ifndef _PhanSo_h
#define _PhanSo_h
#include <iostream>
using namespace std;

class PhanSo {
private:
    int tu, mau;

public:
    PhanSo() {
        this->tu = 0;
        this->mau = 1;
    }

    PhanSo(const int& tu, const int& mau) {
        this->tu = tu;
        this->mau = mau;
        if (this->mau == 0) {
            cout << "Mau phai khac 0\n";
            this->tu = 0;
            this->mau = 0;
        }
    }

    PhanSo operator+(const PhanSo& ps) {
        PhanSo newPhanSo(this->tu * ps.mau + this->mau * ps.tu, this->mau * ps.mau);// a/b +c/d = (a*d+c*b)/bd
        return newPhanSo;
    }

    PhanSo operator+=(const PhanSo& ps) {
        this->tu = this->tu * ps.mau + this->mau * ps.tu;
        this->mau *= ps.mau;
        return *this;
    }

    PhanSo operator+(const int& num) {
        PhanSo newPhanSo(this->tu + num * this->mau, this->mau);// a/b + c/b = (a+c)/b
        return newPhanSo;
    }

    PhanSo operator++() {
        this->tu += this->mau; // a/b +1 = (a+b)/b
        return *this;
    }

    operator int(){
        return this->tu/this->mau;
    }
    
    friend ostream& operator<<(ostream& out, const PhanSo& ps) {
        out << ps.tu << "/" << ps.mau;
        return out;
    }

    ~PhanSo() {
        this->tu = 0;
        this->mau = 1;
    }
};

#endif // _PhanSo_h