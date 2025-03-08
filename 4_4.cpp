//4_4.cpp
#include <iostream>
#include <cmath>
#include<string>
using namespace std;

class Point {
public:
    Point(int xx = 0, int yy = 0) {
        x = xx;
        y = yy;
    }
    Point(const Point &p);
    int getX() const { return x; }
    int getY() const { return y; }
    string getChar() const;
private:
    int x, y;
};
Point::Point(const Point &p) {
    x = p.x;
    y = p.y;
    cout << "Calling the copy constructor of Point" << endl;
}
string Point::getChar() const {
    return string("(" + to_string(x) + "," + to_string(y) + ")");
}

class Line {
public:
    Line(const Point &xp1, const Point &xp2);
    Line(const Line &l);
    double getLen() const{ return len; }
    ~Line();
private:
    Point p1, p2;
    double len;
};
Line::Line(const Point &xp1, const Point &xp2) : p1(xp1), p2(xp2) {
    cout << "Calling constructor of Line" << endl;
    double x = p1.getX() - p2.getX();
    double y = p1.getY() - p2.getY();
    len = sqrt(x * x + y * y);
}
Line::Line (const Line &l): p1(l.p1), p2(l.p2) {
    cout << "Calling the copy constructor of Line" << endl;
    len = l.len;
}
Line::~Line() {
    cout << "Calling the destructor of Line" << p1.getChar() <<" "<< p2.getChar() << endl;
}

//主函数
int main() {
    Point myp1(1, 1), myp2(4, 5);
    Line line(myp1, myp2);
    Line line2(line);
    Line line3(line2);
    cout << "The length of the line is: ";
    cout << line.getLen() << endl;
    cout << "The length of the line2 is: ";
    cout << line2.getLen() << endl;
    return 0;
}
