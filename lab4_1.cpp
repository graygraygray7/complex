#include<iostream>
#include"head.h"
using namespace std;

CPU::CPU(CPU_Rank rank, int fre, double vol) :
	rank(rank), frequency(fre), voltage(vol) {
	cout << "A CPU is creat!" << endl << "Rank:" << '\t' << rank << endl;
	cout << "frequency" <<  '\t' << frequency << endl;
	cout << "voltage" <<  '\t' <<voltage<< endl;
}
CPU::CPU(CPU_Rank rank) :
	rank(rank), frequency(4500), voltage(1.5) {
	cout << "A CPU is creat!" << endl << "Rank:" << '\t' << rank << endl;
	cout << "frequency" << '\t' << frequency << endl;
	cout << "voltage" << '\t' << voltage << endl;
}
CPU::~CPU() {
	cout << endl << "Delete:" << endl << "Rank:" << '\t' << rank << endl;
	cout << "frequency" << '\t' << frequency << endl;
	cout << "voltage" << '\t' << voltage << endl;
}
const void CPU::run(){ cout << "run!" << frequency << endl; }
void CPU::stop(){
	cout << "stop!" << endl;
}

int main() {
	CPU c1(P7, 6000, 1.5);
	c1.run();
	c1.stop();
	return 0;
}
