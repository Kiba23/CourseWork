#pragma once
#include "FoodBase.h"

class Beverages : public FoodBase
{
private:
	std::vector<std::pair<std::string, int>> Dishes_Beverages = { {"Juice", 50}, { "Lemonad", 50 }, 
		{ "Coke", 50 }, { "", 50 }, { "", 50 }, { "", 50 } };
public:
	Beverages();

	void PrintMenu() override;
};