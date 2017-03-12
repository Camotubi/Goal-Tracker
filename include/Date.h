#ifndef _DATE_H
#define _DATE_H
#include <vector>
#include "Item.h"
class Date : public Item
{
	private: 
		int currentDate[3];
		std::vector<int> strikesHistory;
		int maxStrike;
	public:
		int* getCurrentDate();
		std::vector<int> getStrikesHistory();
		int getMaxStrike();
		void setCurrentDate(int day,int month , int year);
		void addToStrikesHistory(int num);
		void setMaxStrike(int num);

};


#endif
