#include "FoodBase.h"

// Default constructor for creating object
FoodBase::FoodBase() { }

// For calculating amount of calories. All food classes used it, except Meat class (Polymorphism)
double FoodBase::CalculateCalories(std::string& dish, int& amount)
{
    for (int i = 0; i < Dishes_Calories.size(); i++) {
        if (dish == Dishes_Calories[i].first) {
            SumOfCalories = Dishes_Calories[i].second * amount;
            return SumOfCalories;
        }
    }
}

// Gets and Sets
std::vector<std::pair<std::string, double>> FoodBase::GetDishes_Calories() { return Dishes_Calories; }
int FoodBase::GetSumOfCalories() { return SumOfCalories; }

void FoodBase::SetDishesCalories(std::vector<std::pair<std::string, int>>& Dishes)
{ 
    for (int i = 0; i < Dishes.size(); i++) {
        Dishes_Calories.push_back(std::make_pair(Dishes[i].first, Dishes[i].second));
    }
}

// Operator overloading for summing all calories
IFood& FoodBase::operator+=(IFood* obj)
{
    SumOfCalories += obj->GetSumOfCalories();
    return *this;
}

// Showing Menu (never used, just in case)
void FoodBase::PrintMenu()
{
    for (int i = 0; i < Dishes_Calories.size(); i++) {
        std::cout << "All dishes: " << Dishes_Calories[i].first << " ";
    }
}