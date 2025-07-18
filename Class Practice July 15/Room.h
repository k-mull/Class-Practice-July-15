#ifndef ROOM
#define ROOM
#include <iostream>
using namespace std;
class Room
{
private:

	string name;
	double length;
	double width;
	int numberOfWindows;

public:
	Room();
	Room(string nam, double len, double wid, int numWin);
	string getName();
	double getLength();
	double getWidth();
	int getNumberOfWindows();
	void setName(string nam);
	void setLength(double len);
	void setWidth(double wid);
	void setNumberOfWindows(int num);

	double getArea();
	bool hasNaturalLight();
	string describeRoom();

};
#endif 

