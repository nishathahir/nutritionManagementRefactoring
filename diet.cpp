#include<iostream>
#include<fstream>
#include<stdlib.h>
#include"diet.h"

using namespace std;

void Diet::Risk()
{
    system("open");
    ifstream file;
    if (N.Flag==1)
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
    else if (N.Flag==2)
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
    else if (N.Flag==3)
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
void Diet::FoodTimings()
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

void Diet::DietChart()
{
    system("open");
    ifstream file;
    if (N.FoodCategory==1)
    {
        if (N.Flag==1)
        {
            file.open("underweight_v_diet.txt");
            if(!file)
            {
                cout<<"\nERROR"<<endl;
                cout<<"File Not Found"<<endl;
            }
            else
            {
                string line;
                while(file.good())
                {
                    getline(file,line);
                    cout<<"\n"<<line<<endl;
                }
                file.close();
            }
        }
        else if (N.Flag==2)
        {
            file.open("normal_v_diet.txt");
            if(!file)
            {
                cout<<"\nERROR"<<endl;
                cout<<"File Not Found"<<endl;
            }
            else
            {
                string line;
                while(file.good())
                {
                    getline(file,line);
                    cout<<"\n"<<line<<endl;
                }
                file.close();
            }
        }
        else if (N.Flag==3)
        {
            file.open("overweight_v_diet.txt");
            if(!file)
            {
                cout<<"\nERROR"<<endl;
                cout<<"File Not Found"<<endl;
            }
            else
            {
                string line;
                while(file.good())
                {
                    getline(file,line);
                    cout<<"\n"<<line<<endl;
                }
                file.close();
            }
        }

    }
    if(N.FoodCategory==2)
    {
        if (N.Flag==1)
        {
            file.open("underweight_nv_diet.txt");
            if(!file)
            {
                cout<<"\nERROR"<<endl;
                cout<<"File Not Found"<<endl;
            }
            else
            {
                string line;
                while(file.good())
                {
                    getline(file,line);
                    cout<<"\n"<<line<<endl;
                }
                file.close();
            }
        }
        else if (N.Flag==2)
        {
            file.open("normal_nv_diet.txt");
            if(!file)
            {
                cout<<"\nERROR"<<endl;
                cout<<"File Not Found"<<endl;
            }
            else
            {
                string line;
                while(file.good())
                {
                    getline(file,line);
                    cout<<"\n"<<line<<endl;
                }
                file.close();
            }
        }
        else if (N.Flag==3)
        {
            file.open("overweight_nv_diet.txt");
            if(!file)
            {
                cout<<"\nERROR"<<endl;
                cout<<"File Not Found"<<endl;
            }
            else
            {
                string line;
                while(file.good())
                {
                    getline(file,line);
                    cout<<"\n"<<line<<endl;
                }
                file.close();
            }
        }

    }
    system("pause");
}

