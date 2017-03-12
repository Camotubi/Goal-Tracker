#include "Number.h"

Number::Number(std::string name, std::string descrip, std::string unit, float num)
{
	this->name = name;
	this->descrip = descrip;
	this->unit = unit;
	addNumberHistory(num);
}

Number::Number()
{

}
Number::~Number()
{

}
float Number::getLastNumber()
{
	return numberHistory.back();
}
std::vector<float> Number::getNumberHistory()
{
	return numberHistory;
}
float Number::getHighest()
{
	return highest;	
}
float Number::getLowest()
{
	return lowest;
}
std::string Number::getUnit()
{
	return unit;
}
void Number::setNumberHistory(std::vector<float> numberHistory)
{
	this->numberHistory = numberHistory;
}
void Number::addNumberHistory(float number)
{
	this->numberHistory.push_back(number);
}
void Number::setHighest(float highest)
{
	this->highest = highest;
}
void Number::setLowest(float lowest)
{
	this->lowest = lowest;
}
void Number::setUnit(std::string unit)
{
	this->unit = unit;
}
