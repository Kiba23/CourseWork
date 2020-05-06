#pragma once
#include "FoodBase.h"
#include "Meat.h"
#include "Fruits.h"
#include "Vegetables.h"
#include "Soups.h"
#include "Salads.h"
#include "Beverages.h"

class Menu
{
private:
	std::map<std::string, IFood*> m_food;

public:
	Menu();

	IFood* SelectKindOfFood(std::string food);
};