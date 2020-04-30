#pragma once
#include "FoodBase.h"

class Vegetables : public FoodBase
{
private:
	std::vector<std::pair<std::string, int>> Dishes = { {"Cucumber", 50}, {"Onion", 50}, {"Garlic", 50}, 
		{"Carrot", 50}, {"Cabbage", 50}, {"Mushroom", 50}, {"Pepper", 50}, {"Olives", 50}, 
		{"Pumpkin", 50}, {"Avocado", 50} }; /* per 1 vegetable*/
public:
	Vegetables() : FoodBase(Dishes) {}

	std::string MenuDishes() override;
};