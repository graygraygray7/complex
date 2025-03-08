#include<iostream>
#include"head.h"
using namespace std;

Data::Data(int y, int m, int d) :
	y(y), m(m), d(d) {
	leap = (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
	day = dayinyear();
}
int Data::dayinyear() {
	if (leap) mo[1] += 1;
	if (d > mo[m - 1]) return -1;
	int sum = 0;
	for (int i = 1; i < m; i++) {
		sum += mo[i];
	}
	sum += d;
	return sum;
}
int Data::days(Data s) {
	if (y == s.y)return s.day - day;
	int sum = s.day;
	if (leap) sum += 366 - day;
	else sum += 365 - day;
	for (int i = y + 1; i < s.y; i++) {
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) sum += 366;
		else sum += 365;
	}
	return sum;
}
const bool Data::com(Data s) {
	if (y < s.y)return true;
	else if (m < s.m)return true;
	else if (d <= s.d)return true;
	return false;
}

class People {
private:
	int number;
	bool sex;
	Data birth;
public:
	People(int a, bool b, Data c) :number(a), sex(b), birth(c) {};
	People(People& p);
	void get_number(){
		cout << number << endl;
	};
};
People::People(People& p) {
	number = p.number;
	sex = p.sex;
	birth = p.birth;
	cout << number << sex << endl;
}

int main2() {
	Data d1(2030, 4, 1);
	People fool(114514, true, d1);
	People Alice = fool;
	return 0;
}