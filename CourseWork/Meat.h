#pragma once
#include "FoodBase.h"

class Meat : public FoodBase
{
private:
	std::vector<std::pair<std::string, int>> Dishes = { {"Pork", 50}, {"Chicken", 50}, {"Beef", 50}, 
		{"Fish", 50}, {"Duck", 50}, {"Bacon", 50} };
public:
	Meat() : FoodBase(Dishes) {}

	std::string MenuDishes() override;
};