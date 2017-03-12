#include "Item.h"

	std::string Item::getDescrip()
	{
		return descrip;
	}	
	std::string Item::getName()
	{
		return name;
	}
	int Item::getCreationDay()
	{
		return creationDate[0];
	}
	int Item::getCreationMonth()
	{
		return creationDate[1];
	}
	int Item::getCreatioYear()
	{
		return creationDate[2];
	}
	int* Item::getCreationDate()
	{
		return creationDate;
	}



	void Item::setDescrip(std::string descrip)
	{
		this->descrip = descrip;		
	}
	void Item::setName(std::string name)
	{
		this->name = name;
	}
	void Item::setCreationDay(int day)
	{
		this->creationDate[0] = day;
	}
	void Item::setCreationMonth(int month)
	{
		this->creationDate[1] = month;
	}
	void Item::setCreationYear(int year)
	{
		this->creationDate[2] = year;
	}
	void Item::setCreationDate(int creationDate[3])
	{
		this->creationDate[3] = creationDate[3];
	}
	void Item::setCreationDate(int day,int month, int year)
	{
		this->creationDate[0] = day;
		this->creationDate[1] = month;
		this->creationDate[2] = year;
	}

