#pragma once
#include "FoodBase.h"

class Salads : public FoodBase
{
private:
	std::vector<std::pair<std::string, int>> Dishes_Salads = { {"Cesar", 50}, { "", 50 }, { "", 50 }, 
		{ "", 50 }, { "", 50 }, { "", 50 } };
public:
	Salads();

	void PrintMenu() override;
};