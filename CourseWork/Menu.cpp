#include "Menu.h"

Menu::Menu()
{
	m_food.insert(std::make_pair("Meat", new Meat()));
	m_food.insert(std::make_pair("Fruits", new Fruits()));
	m_food.insert(std::make_pair("Vegetables", new Vegetables()));
	m_food.insert(std::make_pair("Soups", new Soups()));
	m_food.insert(std::make_pair("Salads", new Salads()));
	m_food.insert(std::make_pair("Beverages", new Beverages()));

	std::cout << "Kinds of food: ";
	for (auto elem : m_food) {
		std::cout << elem.first << " ";
	}
	std::cout << std::endl;
}

IFood* Menu::SelectKindOfFood(std::string food)
{
	for (auto elem : m_food) {
		if (food == elem.first) {
			return elem.second;
		}
	}
}