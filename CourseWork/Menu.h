#pragma once
#include "IFood.h"
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
	std::string KindOfFood;
	IFood* Obj;

public:
	Menu();

	void SelectKindOfFood(std::string& food);

	std::string GetKindOfFood();

	IFood* GetObjOfFood();
};