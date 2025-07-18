#include "Room.h"
#include <string>
Room::Room()
{
	name = "bedroom";
	length = 12.00;
	width = 12.00;
	numberOfWindows = 2;

}
Room::Room(string nam, double len, double wid, int numWin)
{
	name = nam;
	length = len;
	width = wid;
	numberOfWindows = numWin;
}
string Room::getName()
{
	return name;
}
double Room::getLength()
{
	return length;
}
double Room::getWidth()
{
	return width;
}
int Room::getNumberOfWindows()
{
	return numberOfWindows;
}
void Room::setName(string nam)
{
	name = nam;
}
void Room::setLength(double len)

{
	length = len;
}
void Room::setWidth(double wid)
{
	width = wid;
}
void Room::setNumberOfWindows(int num)
{
	numberOfWindows = num;
}
double Room::getArea()
{
	return length * width;
}
bool Room::hasNaturalLight()
{
	return numberOfWindows > 0;

}
string Room::describeRoom()
{
	/*return ("The room called " + name + " has a length of " + to_string(length)
		+ " a width of " + to_string(width) + " makeing an area of "+ to_string(getArea()) + " with " + to_string(numberOfWindows) + " windows." );*/
	string result = "A " + to_string(getArea()) + " " + name + "" + " with " + (hasNaturalLight() ? " " : " out") + "natural light.";
	return result;
}
