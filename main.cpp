//
// Created by grayy on 25-3-7.
//

#include<iostream>
using namespace std;

class Complex {
private:
    double real;
    double ima;
public:
    Complex(double real, double ima):real(real) , ima(ima){};
    void show() {
        if (ima==0) {
            cout<<real<<endl;
        }
        else {
            cout<<real<<'+'<<ima<<'i'<<endl;
        }
    }
    void add(Complex z) {
        real=real+z.real;
        ima=ima+z.ima;
    }
};

int main() {
    int a = 0;
    int b  = 2;
    cout << a+b<<endl;
    if (a==0) {
        cout<<"yes"<<endl;
    }
    return 0;
}

