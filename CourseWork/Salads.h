#pragma once
#include "FoodBase.h"

class Salads : public FoodBase
{
private:
	std::vector<std::pair<std::string, int>> Dishes_Salads = { {"Cesar", 50}, { "Lettuce salad", 15}, 
		{ "Bean salad", 114 }, { "Egg salad", 706 }, { "Cabbage salad", 269 }, { "Greek salad", 106 }, 
		{ "Potato salad", 358 }, { "Beef salad", 495 }, { "Chicken salad", 417 }, { "Crab salad", 381 }, 
		{ "Salmon salad", 406 }, { "Seafood salad", 50 }, { "Shrimp salad", 258 } }; /* per 1 cup serving */
public:
	Salads();

	void PrintMenu() override;
};