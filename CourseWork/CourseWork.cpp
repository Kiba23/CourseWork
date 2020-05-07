#include "IFood.h"
#include "IMenu.h"
#include "FoodBase.h"
#include "Menu.h"

/*                      NOTES
    To do: 1 more opertor overload, Menu should be 
        base class, Initialize all products, 
        Calculate normal amount calories of each person.
    Possibilities to improve: If user's dish wasn't 
        found he cand declare it by himself and also 
        input amount of calories.
*/

void Introduction() 
{
    std::cout << "<<< Calories Calculator >>>" << std::endl << std::endl;
    std::cout << "How many dishes do you want to calculate?" << std::endl;
    std::cout << "---" << std::endl;
}

int main()
{
    // Interface of the program
    Introduction();     
    int steps;
    std::cin >> steps;

    // Object for summing calories
    IFood* sum = new FoodBase();

    for (int i = 0; i < steps; i++) {
        // Declaring variables
        std::string kind_of_food;
        std::string dish;
        int amount;

        // Menu
        Menu* menu = new Menu();
        std::cin >> kind_of_food;
        IFood* food = menu->SelectKindOfFood(kind_of_food);
        food->PrintMenu();

        // Input & Calculations
        std::cout << "Enter dish from list: ";
        std::getline(std::cin, dish);
        std::getline(std::cin, dish);
        std::cout << "Enter amount: ";
        std::cin >> amount;

        // Output
        std::cout << "Amount of calories per current dish: " << food->CalculateCalories(dish, amount) << std::endl;
        // Summing calories in one object
        sum->operator+=(food);
        std::cout << "Calories in total: " << sum->GetSumOfCalories();

        // End of the cycle
        std::cout << std::endl << "---" << std::endl;
    }

    return 0;
}