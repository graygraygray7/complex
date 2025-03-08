#include<iostream>
#include<cstdlib>
using namespace std;

class Dice {
private:
	int m;
public:
	Dice(int m): m(m) {};
	int rollDice() const;



};

int Dice::rollDice() const {
	int s1 = 1 + rand() % m;
	int s2 = 1 + rand() % m;
	int sum = s1 + s1;
	cout << "result is " << sum << endl;
	return sum;
}

int main() {
	srand(101);
	Dice d(6);
	return d.rollDice();
	return 0;
}