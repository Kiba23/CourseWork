#pragma once
#include "FoodBase.h"

class Vegetables : public FoodBase
{
private:
	std::vector<std::pair<std::string, int>> Dishes_Vegetables = { {"Cucumber", 50}, { "Onion", 50 }, { "Garlic", 50 },
	{ "Carrot", 50 }, { "Cabbage", 50 }, { "Mushroom", 50 }, { "Pepper", 50 }, { "Olives", 50 },
	{ "Pumpkin", 50 }, { "Avocado", 50 } }; /* per each vegetable */
public:
	// Default constructor, it redirect Meat vector to FoodBase
	Vegetables();

	// Showing menu of dishes
	void PrintMenu() override;
};