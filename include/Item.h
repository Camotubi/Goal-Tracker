#ifndef _ITEM_H
#define _ITEM_H

#include <string>

class Item
{
	protected:
		std::string descrip;
		std::string name;
		int creationDate[3]; 
	public:
		std::string getDescrip();
		std::string getName();
		int getCreationDay();
		int getCreationMonth();
		int getCreatioYear();
		int* getCreationDate();

		void setDescrip(std::string descrip);
		void setName(std::string name);
		void setCreationDay(int day);
		void setCreationMonth(int month);
		void setCreationYear(int year);
		void setCreationDate(int creationDate[3]);
		void setCreationDate(int day,int month, int year);



};




#endif
