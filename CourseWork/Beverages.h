#pragma once
#include "FoodBase.h"

class Beverages : public FoodBase
{
private:
	std::vector<std::pair<std::string, int>> Dishes_Beverages = { {"Apple juice", 110}, {"Banana juice", 120}, 
		{"Carrot juice", 96}, {"Energy drink", 309}, {"Lemonade", 120}, {"Nestea", 50}, {"Orange juice", 110},
		{"Peach juice", 130}, {"Tomato juice", 41}, {"Beer", 153}, {"Bourbon", 103}, {"Cider", 74}, 
		{"Liquor", 63}, {"Vodka", 58}, {"Wine", 125}, {"Coca Cola", 139}, {"Coffee", 3}, {"Diet Coke", 3},
		{"Milk", 149}, {"Tea", 2}, {"Water", 0} };  /* per 1 cup */
public:
	Beverages();

	void PrintMenu() override;
};