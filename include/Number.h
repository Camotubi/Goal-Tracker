#ifndef _NUMBER_H
#define _NUMBER_H
#include <vector>
#include "Item.h"
class Number: public Item
{
	private: 
		std::vector<float> numberHistory;
		float highest;
		float lowest;
		std::string unit;
	public:
		Number(std::string name, std::string descrip);
		Number();

		Number(std::string name, std::string descrip, std::string unit, float num);
		~Number();
		float getLastNumber();
		std::vector<float> getNumberHistory();
		float getHighest();
		float getLowest();
		std::string getUnit();

		void setLastNumber(float lastNumber);
		void setNumberHistory(std::vector<float>);
		void addNumberHistory(float number);
		void setHighest(float highest);
		void setLowest(float lower);
		void setUnit(std::string unit);
};


#endif
