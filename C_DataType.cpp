#include<iostream>
using namespace std;

class Datatype {
private:
	union {
		char a;
		int b;
		double c;
	}data;
	int s;
public:
	Datatype(char value) { data.a = value; s = 1; };
	Datatype(int value) { data.b = value; s = 2; };
	Datatype(double value) { data.c = value; s = 3; };
	void print();
};

void Datatype::print() {
	switch (s) {
	case 1:
		cout << data.a << endl;
		break;
	case 2:
		cout << data.b << endl;
		break;
	case 3:
		cout << data.c <<endl;
		break;
	}
}

int main() {
	Datatype aa('e'),  bb(16), cc(2.56F);
	aa.print();
	bb.print();
	cc.print();
	return 0;
}