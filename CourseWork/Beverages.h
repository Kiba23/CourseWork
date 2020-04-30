#pragma once
#include "FoodBase.h"

class Beverages : public FoodBase
{
private:
	std::vector<std::pair<std::string, int>> Dishes = { {"Juice", 50}, {"Lemonad", 50}, {"Coke", 50}, 
		{"", 50}, {"", 50}, {"", 50} };

public:
	Beverages() : FoodBase(Dishes) {}

	std::string MenuDishes() override;
};