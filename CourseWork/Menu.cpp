#include "Menu.h"

Menu::Menu()
{
	m_food["Meat"] = &Meat();
	m_food["Fruits"] = &Fruits();
	m_food["Vegetables"] = &Vegetables();
	m_food["Soups"] = &Soups();					// check the PORYADOK
	m_food["Salads"] = &Salads();
	m_food["Beverages"] = &Beverages();
}

void Menu::SelectKindOfFood(std::string& food)
{
	for (auto elem : m_food) {
		if (food == elem.first) {
			KindOfFood = food;
			Obj = elem.second;
		}
	}
}

std::string Menu::GetKindOfFood() { return KindOfFood; }

IFood* Menu::GetObjOfFood() { return Obj; }