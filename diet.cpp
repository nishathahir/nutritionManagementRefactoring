#include<iostream>
#include<fstream>
#include<stdlib.h>
#include"diet.h"

using namespace std;

void Diet::Risk() const
{
    system("open");
    ifstream file;
    if (Nutrition::Flag==1)
    {
        file.open("underweight_risk.txt");
        if(!file)
        {
            cout<<"\nERROR"<<endl;
            cout<<"File Not Found"<<endl;
        }
        else
        {
            string line;
            cout<<"\n";
            cout<<"\n";
            cout<<"\n";
            cout<<"\n";
            cout<<"\n";
            cout<<"\n";
            cout<<"\n";
            cout<<"\n";
            cout<<"\n";
            cout<<"\n";
            cout<<"\n";
            cout<<"\n";
            while(file.good())
            {
                getline(file,line);
                cout<<"\n\t\t\t\t"<<line<<endl;
            }
            file.close();
        }
    }
    else if (Nutrition::Flag==2)
    {
        file.open("normal_maintain.txt");
        if(!file)
        {
            cout<<"\nERROR"<<endl;
            cout<<"File Not Found"<<endl;
        }
        else
        {
            string line;
            cout<<"\n";
            cout<<"\n";
            cout<<"\n";
            cout<<"\n";
            cout<<"\n";
            cout<<"\n";
            cout<<"\n";
            cout<<"\n";
            cout<<"\n";
            cout<<"\n";
            cout<<"\n";
            cout<<"\n";
            while(file.good())
            {
                getline(file,line);
                cout<<"\n\t\t\t\t"<<line<<endl;
            }
            file.close();
        }
    }
    else if (Nutrition::Flag==3)
    {
        file.open("overweight_risk.txt");
        if(!file)
        {
            cout<<"\nERROR"<<endl;
            cout<<"File Not Found"<<endl;
        }
        else
        {
            string line;
            cout<<"\n";
            cout<<"\n";
            cout<<"\n";
            cout<<"\n";
            cout<<"\n";
            cout<<"\n";
            cout<<"\n";
            cout<<"\n";
            cout<<"\n";
            cout<<"\n";
            cout<<"\n";
            cout<<"\n";
            while(file.good())
            {
                getline(file,line);
                cout<<"\n\t\t\t\t"<<line<<endl;
            }
            file.close();
        }
    }
    system("pause");
}
void Diet::FoodTimings() const
{
    system("open");
    cout<<"\n";
    cout<<"\n";
    cout<<"\n\t\t\t\t--------------------------------------------------BEST TIME TO EAT--------------------------------------------------"<<endl;
    cout<<"\n\t\t\t\tBreakfast :"<<endl;
    cout<<"\n\t\t\t\t\t- The sooner you eat breakfast after you wake up, the better it is for your metabolism."<<endl;
    cout<<"\n\t\t\t\t\t- Never skip your breakfast"<<endl;
    cout<<"\n\t\t\t\t\t- Breakfast can be between 7 am to 9 am or within two hours of getting up."<<endl;
    cout<<"\n\t\t\t\tLunch:"<<endl;
    cout<<"\n\t\t\t\t\t- Ideal time to have lunch is 12.45pm"<<endl;
    cout<<"\n\t\t\t\t\t- Try and keep a gap of 4 hours between your breakfast and lunch"<<endl;
    cout<<"\n\t\t\t\tDinner:"<<endl;
    cout<<"\n\t\t\t\t\t- The ideal time to have dinner is before 7pm"<<endl;
    cout<<"\n\t\t\t\t\t- You should keep a gap of 3 hours between your dinner and bedtime"<<endl;
    cout<<"\n\t\t\t\tSnack Time:"<<endl;
    cout<<"\n\t\t\t\t\t- For instance, if you eat breakfast at 7 a.m. and lunch at noon, include a mid-morning snack at 10 a.m."<<endl;
    cout<<"\n\t\t\t\t\t- If you eat breakfast at 8 a.m. and lunch at noon, you probably don't need a snack."<<endl;
    cout<<"\n\t\t\t\t\t- Basically, you want to eat every 2-3 hours,depending on your schedule"<<endl;
    cout<<"\n\t\t\t\t-------------------------------------------------------------------------------------------------------------------"<<endl;
    system("pause");
    system("cls");
}

void Diet::DietChart() const
{
    std::string categoryPrefix = (Nutrition::FoodCategory == 1) ? "v_" : "nv_";
    std::string flagPrefix = "";

    if (Nutrition::Flag == 1)
        flagPrefix = "underweight_";
    else if (Nutrition::Flag == 2)
        flagPrefix = "normal_";
    else if (Nutrition::Flag == 3)
        flagPrefix = "overweight_";
    else
    {
        std::cout << "Invalid Flag!" << std::endl;
        return;
    }

    std::string fileName = flagPrefix + categoryPrefix + "diet.txt";

    std::ifstream file(fileName);

    if (!file)
    {
        std::cout << "\nERROR" << std::endl;
        std::cout << "File Not Found" << std::endl;
        return;
    }

    std::string line;
    while (getline(file, line))
    {
        std::cout << "\n" << line << std::endl;
    }

    file.close();

    system("pause");
}

