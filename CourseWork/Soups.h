#pragma once
#include "FoodBase.h"

class Soups : public FoodBase
{
private:
	std::vector<std::pair<std::string, int>> Dishes_Soups = { {"Beef soup", 70}, { "Bouillon", 39 },
	{ "Cabbage soup", 69 }, { "Chicken soup", 62 }, { "Cream soup", 96 }, { "Mushroom soup", 85 },
	{ "Potato soup", 166 }, { "Pumpkin soup", 71 }, { "Ramen", 371 }, { "Tomato soup", 74 },
	{ "Rice soup", 58 }, { "Vegetable soup", 67 } }; /* per cup serving */
public:
	Soups();

	void PrintMenu() override;
};