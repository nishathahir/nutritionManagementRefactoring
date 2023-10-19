#include<iostream>
#include<cstring>
#include<fstream>
#include"caloriecount.h"

using namespace std;

float CalorieCount::CalCons=0;
float CalorieCount::CalsBurnt=0;

void CalorieCount::CalorieConsumed()
{
    D->DietChart();
    
    int mealChoices[4];
    string mealNames[4] = {"Breakfast", "Lunch", "Dinner", "Snacks"};

    for (int i = 0; i < 4; ++i)
    {
        cout << "\t\t\tEnter the Serial No. of " << mealNames[i] << " :";
        cin >> mealChoices[i];

        while (mealChoices[i] < 1 || mealChoices[i] > 7)
        {
            cout << "\t\t\tInvalid Entry" << endl;
            cout << "\t\t\tEnter the Serial No. of " << mealNames[i] << " :";
            cin >> mealChoices[i];
        }

        // Update CalCons based on Nutrition::Flag and Nutrition::FoodCategory
        if (Nutrition::Flag >= 1 && Nutrition::Flag <= 3 && Nutrition::FoodCategory >= 1 && Nutrition::FoodCategory <= 2)
        {
            CalCons += CalorieTable[Nutrition::Flag - 1][Nutrition::FoodCategory - 1][mealChoices[i] - 1];
        }
    }
}

// Define a static 3D array for calorie values
static const float CalorieTable[3][2][7] = {
    {
        {{304, 320, 280, 278, 270, 265, 286}, {300, 401, 438, 370, 320, 370, 340}},
        {{300, 240, 280, 280, 281, 264, 350}, {417, 300, 400, 450, 387, 350, 420}}
    },
    // Add values for Flag 2 and 3 here
};

void CalorieCount::CalorieBurnt()
{
    cout<<"\t\t\tDid you workout (y/n)?";
    cin>>ch;
    while((strcmp("n",ch)!=0)&&(strcmp("y",ch)!=0))
    {
        cout<<"\t\t\tInvalid Entry"<<endl;
        cout<<"\t\t\tDid you workout (y\n)?";
        cin>>ch;
    }
    cout<<"\t\t\tMiles Walked :";
    cin>>miles;
    while((miles<0)||(miles>40))
    {
        cout<<"\t\t\tInvalid Entry"<<endl;
        cout<<"\t\t\tMiles walked :";
        cin>>miles;
    }
    if (strcmp("n",ch)==0)
    {
        cout<<"\t\t\tIf you're eating the right food and keeping fit, your body will be strong and help you to cope with stress and also fight illness."<<endl;
        cout<<"\t\t\tEating well and exercising often when you're a teenager will also help you stay in good health later in life."<<endl;
        cout<<"\t\t\tTry to be regular in your exercise. "<<endl;
    }
    else if (strcmp("y",ch)==0)
    {
        if(Nutrition::Flag==1)
            CalsBurnt+=150;
        else if (Nutrition::Flag==2)
            CalsBurnt+=200;
        else if(Nutrition::Flag==3)
            CalsBurnt+=350;

    }
}

void const CalorieCount::CalorieReport()
{
    cout<<"\n\t\t\tCalorie Intake :"<<CalCons;
    cout<<"\n\t\t\tCalories Burnt in Walking :"<<miles*80;
    cout<<"\n\t\t\tCalories Burnt in Workout :"<<CalsBurnt;
    cout<<endl;
}



