#pragma once
#include "IMenu.h"
#include "IFood.h"
#include "Meat.h"
#include "Fruits.h"
#include "Vegetables.h"
#include "Soups.h"
#include "Salads.h"
#include "Beverages.h"

class Menu : public IMenu
{
private:
	std::map<std::string, IFood*> m_food;

public:
	Menu();

	IFood* SelectKindOfFood(std::string food) override;
};