#include<iostream>
#include"head.h"
using namespace std;

ROM::ROM(ROM_rank rank, int fre, double vol) :
	rank(rank), frequency(fre), voltage(vol) {
	cout << "A ROM is creat!" << endl << "Rank:" << '\t' << rank << endl;
	cout << "frequency" << '\t' << frequency << endl;
	cout << "voltage" << '\t' << voltage << endl;
}
ROM::ROM(ROM_rank rank) :
	rank(rank), frequency(6400), voltage(1.5) {
	cout << "A ROM is creat!" << endl << "Rank:" << '\t' << rank << endl;
	cout << "frequency" << '\t' << frequency << endl;
	cout << "voltage" << '\t' << voltage << endl;
}
ROM::~ROM() {
	cout << endl << "Delete:" << endl << "Rank:" << '\t' << rank << endl;
	cout << "frequency" << '\t' << frequency << endl;
	cout << "voltage" << '\t' << voltage << endl;
}
void ROM::overclock(int n) { 
	frequency = n;
	cout << "ROM overclock to " << n << endl;
}

GPU::GPU(GPU_rank rank, int fre, double vol) :
	rank(rank), frequency(fre), voltage(vol) {
	cout << "A GPU is creat!" << endl << "Rank:" << '\t' << rank << endl;
	cout << "frequency" << '\t' << frequency << endl;
	cout << "voltage" << '\t' << voltage << endl;
}
GPU::GPU(GPU_rank rank) :
	rank(rank), frequency(2500), voltage(1.5) {
	cout << "A GPU is creat!" << endl << "Rank:" << '\t' << rank << endl;
	cout << "frequency" << '\t' << frequency << endl;
	cout << "voltage" << '\t' << voltage << endl;
}
GPU::~GPU() {
	cout << endl << "Delete:" << endl << "Rank:" << '\t' << rank << endl;
	cout << "frequency" << '\t' << frequency << endl;
	cout << "voltage" << '\t' << voltage << endl;
}
void GPU::overclock(int n) {
	frequency = n;
	cout << "GPU overclock to " << n << endl;
}

class Computer {
private:
	CPU cpu_1;
	ROM rom;
	GPU gpu;
public:
	Computer(CPU, ROM, GPU);
	void overclock(int, int);
};

Computer::Computer(CPU cpu_1, ROM rom, GPU gpu) :
	cpu_1(cpu_1), rom(rom), gpu(gpu) {};

void Computer::overclock(int a, int b) {
	rom.overclock(a);
	gpu.overclock(b);
}