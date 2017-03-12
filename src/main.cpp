#include <iostream>
#include <vector>
#include <string>
#include "Date.h"
#include "Number.h"
#include <limits>


//---Prototypes
void printAllItems(std::vector<Item> itemList);
void addItem(std::vector<Item> &itemList);
void selectItem(std::vector<Item> &itemList);
//---Global Variables
std::string invalidOptionText = ">>Thats not an option, please try again";
std::string mainMenuText = "1)List everything\n2)Add Item\n3)Select Item\n4)Delete Item\n0)End Program\n:"; 
std::string programExitText = ">>GoodBye :)";

int main()
{

	std::vector<Item> itemList;
	bool run = true;
	while(run)
	{

		bool inputError = true;
		do
		{

			int mainMenuOp;
			std::cout<<mainMenuText;
			std::cin>>mainMenuOp;
			if(std::cin)
			{
				inputError = false;
				switch(mainMenuOp)
				{
					case 1:
						printAllItems(itemList);
						break;
					case 2:
						addItem(itemList);
						break;
					case 3:

						break;


					case 0:
						std::cout<<programExitText<<std::endl;
						run = false;
						break;

					default:
						std::cout<<invalidOptionText<<std::endl;
						break;
				}
			}
			else
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout<<invalidOptionText<<std::endl;
			}
		}while(inputError);

	}
	return 0;
}

void printAllItems(std::vector<Item> itemList)
{
	if(!itemList.empty())
	{
		std::cout<<"id\tName"<<std:::endl;
		for(int i = 0; i<itemList.size();i++)
		{
			std::cout<<i<<"\t"<<itemList.at(i).getName()<<std::endl;
		}
	} 
	else
	{
		std::cout<<">>List of items empty."<<std::endl;
	}
}


void addItem(std::vector<Item> &itemList)
{

	bool inputError = true;
	do
	{
		int op = 0;
		std::cout<<"1)Number.\n2)Date.\n0)Back to main menu."<<std::endl;
		std::cin>>op;
		if(std::cin)
		{
			inputError = false;
			switch(op)
			{
				case 0:
					return;
					break;
				case 1:
					{
					       
						std::string name;
						std::string descrip;
						std::string unit;
						float initialNum;
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						std::cout<<"Name:";
						std::getline(std::cin,name);
						std::cout<<"Description:";
						std::getline(std::cin,descrip);
						
						std::cout<<"Unit:";
						std::getline(std::cin,unit);

						bool inputError2;
						do
						{
							std::cout<<"Initial Value:";
							std::cin>>initialNum;
							if(std::cin)
							{
								inputError2 = false;
							}
							else
							{
								inputError2 = true;
								std::cin.clear();
								std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
								std::cout<<invalidOptionText<<std::endl;
							}
						}while(inputError2);
						Number numberItem(name, descrip, unit, initialNum);
						itemList.push_back(numberItem);
						break;
					}
				case 2:

					break;
				default:
					std::cout<<invalidOptionText<<std::endl;
					break;
			}
		}
		else
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout<<invalidOptionText<<std::endl;
		}
	}while(inputError);
}

void selectItem( std::vector<Item> &itemList)
{


}
