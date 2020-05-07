#pragma once
#include "FoodBase.h"

class Fruits : public FoodBase
{
private:
	std::vector<std::pair<std::string, int>> Dishes_Fruits = { {"Apple", 95}, { "Orange", 62 }, { "Banana", 111 },
	{ "Peach", 59 }, { "Mandarine", 47 }, { "Watermelon", 86/*per 1 wedge (286gr)*/ },
	{ "Melon", 23/*per 1 wedge (69gr)*/ }, { "Pineapple", 453 }, { "Strawberry", 49/*per 1 cup (152gr)*/ },
	{ "Mango", 202 } };  /* per 1 fruit */
public:
	Fruits();

	void PrintMenu() override;
};