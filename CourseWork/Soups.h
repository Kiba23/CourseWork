#pragma once
#include "FoodBase.h"

class Soups : public FoodBase
{
private:
	std::vector<std::pair<std::string, int>> Dishes = { {"Beef Soup", 70}, {"Bouillon", 39},
		{"Cabbage Soup", 69}, {"Chicken Soup", 62}, {"Cream Soup", 96}, {"Mushroom Soup", 85},
		{"Potato Soup", 166 }, {"Pumpkin Soup", 71}, {"Ramen", 371}, {"Tomato Soup", 74},
		{"Rice Soup", 58}, {"Vegetable Soup", 67} }; // per 1 serving (cup)
public:
	Soups() : FoodBase(Dishes) {}

	std::string MenuDishes() override;
};