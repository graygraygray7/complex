//
// Created by grayy on 25-3-7.
//
#include <iostream>
using namespace std;
class Complex {
private:
    double real;
    double ima;
public:
    Complex(double r, double i) : real(r), ima(i) {};
    Complex(double r) : real(r), ima(0) {};
    void add(Complex z) {
        real = real + z.real;
        ima = ima + z.ima;
    }
    void show() const {
        if (ima==0) {
            cout<<real<<endl;
        }
        else {
            cout<<real<<'+'<<ima<<'i'<<endl;
            cout << "cut" << endl;
            cout << "cut" << endl;
            cout << "cut" << endl;
            cout << "cut" << endl;
        }
    }
};

int main() {
    Complex c1(5,8);  // 用复数5+8i初始化c1
    const Complex c2 = 6.7; //用实数6.7初始化c2
    c1.add(c2);       //将c1与c2相加，结果保存在c1中
    c1.show();        //将c1输出（这时的结果应该是11.7+8i）
    return 0;
}