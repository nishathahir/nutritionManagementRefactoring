#include <iostream>
#include <vector>
#include "caloriecount.h"

using namespace std;

float CalorieCount::CalCons = 0;
float CalorieCount::CalsBurnt = 0;

// Assuming D and N objects are defined
void CalorieCount::CalorieConsumed()
{
    D->DietChart();

    vector<int> mealChoices = {BrNo, LuNo, DiNo, SnNo};
    const int MaxChoice = 7;
    const float CaloriesTable[2][7] = {{304, 320, 280, 278, 270, 265, 286}, 
                                      {300, 401, 438, 370, 320, 370, 340}};

    for (int& choice : mealChoices)
    {
        while (choice < 1 || choice > MaxChoice)
        {
            cout << "\t\t\tInvalid Entry" << endl;
            cout << "\t\t\tEnter a valid choice :";
            cin >> choice;
        }
        CalCons += CaloriesTable[N.FoodCategory - 1][choice - 1];
    }
}

void CalorieCount::CalorieBurnt()
{
    cout << "\t\t\tDid you workout (y/n)?";
    cin >> ch;
    while (ch != 'y' && ch != 'n')
    {
        cout << "\t\t\tInvalid Entry" << endl;
        cout << "\t\t\tDid you workout (y/n)?";
        cin >> ch;
    }

    if (ch == 'y')
    {
        const float CaloriesBurntTable[3] = {150, 200, 350};
        CalsBurnt += CaloriesBurntTable[N.Flag - 1];
    }
}

void CalorieCount::CalorieReport()
{
    cout << "\n\t\t\tCalorie Intake :" << CalCons;
    cout << "\n\t\t\tCalories Burnt in Walking :" << miles * 80;
    cout << "\n\t\t\tCalories Burnt in Workout :" << CalsBurnt;
    cout << endl;
}
