#include<iostream>
using namespace std;

enum CPU_Rank { P1 = 1, P2, P3, P4, P5, P6, P7 };
enum ROM_rank { DDR4 = 4, DDR5 };
enum GPU_rank{GTX=1, RTX};
class CPU {
private:
	CPU_Rank rank;
	int frequency;
	double voltage;
public:
	CPU(CPU_Rank, int, double);
	CPU(CPU_Rank);
	~CPU();
	void getrank() const { cout << rank << endl; };
	const void run();
	void stop();

};
class ROM {
	ROM_rank rank;
	int frequency;
	double voltage;
public:
	ROM(ROM_rank, int, double);
	ROM(ROM_rank);
	~ROM();
	void getrank() const { cout << rank << endl; };
	void overclock(int);
};
class GPU {
	GPU_rank rank;
	int frequency;
	double voltage;
public:
	GPU(GPU_rank, int, double);
	GPU(GPU_rank);
	~GPU();
	void getrank() const { cout << rank << endl; };
	void overclock(int);
};

class Data {
private:
	int y;
	int m;
	int d;
	int day;
	bool leap;
	// friend Data;
	int mo[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
public:
	Data() = default;
	Data(int y, int m, int d);
	int dayinyear();
	int days(Data s);
	const bool com(Data);
	
};

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
