#include<iostream>
using namespace std;

class Tree {
private:
	int age;
public:
	Tree(int age) :age(age) { cout << "A tree for you!" << endl; };
	void grow(int years) { age += years; };
	void ages() const { cout << "The age of this tree is " << age << endl; };
};

int main() {
	Tree t(12);
	t.ages();
	t.grow(4);
	return 0;
}