#include "Date.h"

int* Date::getCurrentDate()
{
	return currentDate;
}

std::vector<int> Date::getStrikesHistory()
{
	return strikesHistory;
}

int Date::getMaxStrike()
{
	return Date::maxStrike;
}
void Date::setCurrentDate(int day,int month , int year)
{
	currentDate[0] = day;
	currentDate[1] = month;
	currentDate[2] = year;
}
void Date::addToStrikesHistory(int num)
{
	strikesHistory.push_back(num);
}
void Date::setMaxStrike(int num)
{
	maxStrike = num;
}
