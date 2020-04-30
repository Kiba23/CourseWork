#pragma once
#include "FoodBase.h"

class Salads : public FoodBase
{
private:
	std::vector<std::pair<std::string, int>> Dishes = { {"", 50}, {"", 50}, {"", 50}, {"", 50}, {"", 50}, 
		{"", 50}, };
public:
	Salads() : FoodBase(Dishes) {}

	std::string MenuDishes() override;
};