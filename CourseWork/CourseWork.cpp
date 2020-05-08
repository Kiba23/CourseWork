#include "IFood.h"
#include "IMenu.h"
#include "FoodBase.h"
#include "Menu.h"
#include "ICalculator.h"
#include "CalculatorBase.h"
#include "Male.h"

/*                      NOTES
    To do: 1 more opertor overload.
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

    // First part - calculating how much user ate already
    // Object for summing calories
    IFood* sum = new FoodBase();

    for (int i = 0; i < steps; i++) {
        // Declaring variables
        std::string kind_of_food;
        std::string dish;
        int amount;

        // Menu
        IMenu* menu = new Menu();
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

    // Second part - calculating normal amount of calories and how much left to normal
    // Interface
    std::cout << std::endl << "<<< Normal Amount Of Calories >>>" << std::endl;
    std::cout << "---" << std::endl;
    std::cout << "Enter your gender: ";
    std::string gender;
    std::cin >> gender;
    std::cout << "Enter your age: ";
    int age;
    std::cin >> age;
    std::cout << "Enter your height (cm): ";
    int height;
    std::cin >> height;
    std::cout << "Enter your weight (kg): ";
    int weight;
    std::cin >> weight;

    // Object for storing gender
    ICalculator* gender_obj = new Male();
    // Assigning right object (gender) and output right formula
    ICalculator* calculator = gender_obj->SelectGender(gender);
    // Output
    std::cout << "Your normal amount of calories per day: " << calculator->Calculator(age, height, weight) << std::endl;
    std::cout << "Calories left: " << /*... <<*/ std::endl;
    // End of the program
    std::cout << "---" << std::endl;

    return 0;
}