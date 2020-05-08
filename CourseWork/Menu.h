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
	// Default constructor which creating all objects
	Menu();

	// Selecting and returning kind of food which chosed user
	IFood* SelectKindOfFood(std::string food) override;
};