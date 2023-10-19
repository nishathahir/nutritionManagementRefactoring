#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstdlib>
#include"workout.h"

using namespace std;
void Workout::Time() const
{
    ifstream file;
    file.open("workout_time.txt");
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
            cout<<"\n\t\t"<<line<<endl;
        }
        file.close();
    }
    system("pause");
    system("cls");
}

void Workout::underweight_workout() const
{
    cout<<"\n\t\t\t\t\t\tUnderweight can lead to several medical complications."<<endl;
    cout<<"\n\t\t\t\t\t\tExercises To Gain Weight: How To Bulk Up Muscle Mass Safely:"<<endl;
    cout<<"\n\t\t\t\t\t\t[1] Push Ups\n\t\t\t\t\t\t[2] Bench Press \n\t\t\t\t\t\t[3] Pull Ups\n\t\t\t\t\t\t[4] Bench Dips \n\t\t\t\t\t\t[5] Squats\n\t\t\t\t\t\t[6] Lunges \n\t\t\t\t\t\t[7] Deadlift\n\t\t\t\t\t\t[8] Overhead Press"<<endl;
    cout<<"         Lets workout and fit in!!"<<endl;
    system("pause");
    system("cls");
    ifstream file;
    file.open("pushup.txt");
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
            cout<<"\n\t\t"<<line<<endl;
        }
        file.close();
    system("pause");
    system("cls");

    }
    file.open("benchpress.txt");
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
            cout<<"\n\t\t"<<line<<endl;
        }
        file.close();
        system("pause");
        system("cls");
    }
    file.open("pullups.txt");
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
            cout<<"\n\t\t"<<line<<endl;
        }
        file.close();
        system("pause");
        system("cls");
    }
    file.open("benchdips.txt");
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
            cout<<"\n\t\t"<<line<<endl;
        }
        file.close();
        system("pause");
        system("cls");
    }
    file.open("squats.txt");
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
            cout<<"\n\t\t"<<line<<endl;
        }
        file.close();
        system("pause");
        system("cls");
    }
    file.open("lunges.txt");
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
            cout<<"\n\t\t"<<line<<endl;
        }
        file.close();
        system("pause");
        system("cls");
    }
    file.open("deadlift.txt");
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
        while(file.good())
        {
            getline(file,line);
            cout<<"\n\t\t"<<line<<endl;
        }
        file.close();
        system("pause");
        system("cls");
    }

    file.open("overhead_press.txt");
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
            cout<<"\n\t\t"<<line<<endl;
        }
        file.close();
        system("pause");
        system("cls");
    }

}

void Workout::normal_workout() const
{
    cout<<"\n\t\t\t\t\t\tGetting regular exercise and keeping your body fit helps lower your risk of chronic problems."<<endl;
    cout<<"\n\t\t\t\t\t\tAcross the board, physical activity and maintaining fitness usually helps."<<endl;
    cout<<"\n\t\t\t\t\t\t[1] Push Ups\n\t\t\t\t\t\t[2] Squats\n\t\t\t\t\t\t[3] Jumping Jacks\n\t\t\t\t\t\t[4] Hip Bridge \n\t\t\t\t\t\t[5] Plank"<<endl;
    cout<<"         Lets workout and fit in!!"<<endl;
    system("pause");
    system("cls");
    ifstream file;
    file.open("pushup.txt");
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
            cout<<"\n\t\t"<<line<<endl;
        }
        file.close();
    system("pause");
    system("cls");
    file.open("squats.txt");
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
            cout<<"\n\t\t"<<line<<endl;
        }
        file.close();
        system("pause");
        system("cls");
    }
    file.open("jumping_jacks.txt");
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
            cout<<"\n\t\t"<<line<<endl;
        }
        file.close();
        system("pause");
        system("cls");
    }
    file.open("hipbridge.txt");
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
            cout<<"\n\t\t"<<line<<endl;
        }
        file.close();
        system("pause");
        system("cls");
    }
    file.open("planks.txt");
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
            cout<<"\n\t\t"<<line<<endl;
        }
        file.close();
        system("pause");
        system("cls");
    }
}
}

void Workout::overweight_workout() const
{
    cout<<"\n\t\t\t\t\t\tBeing obese can also increase your risk of developing many potentially serious health conditions including type 2 diabetes, high blood pressure, high cholesterol and heart diseases."<<endl;
    cout<<"\n\t\t\t\t\t\tCarrying extra fat leads to serious health consequences"<<endl;
    cout<<"\n\t\t\t\t\t\tThese conditions cause premature death and substantial disability."<<endl;
    cout<<"\n\t\t\t\t\t\t[1] Skipping\n\t\t\t\t\t\t[2] Burpees\n\t\t\t\t\t\t[3] Squats\n\t\t\t\t\t\t[4] Glute Bridge \n\t\t\t\t\t\t[5] Plank \n\t\t\t\t\t\t[6] Crunches"<<endl;
    cout<<"         Lets workout and fit in!!It Feels good to be fit and strong !!"<<endl;
    ifstream file;
    file.open("skipping.txt");
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
            cout<<"\n\t\t"<<line<<endl;
        }
        file.close();
        system("pause");
        system("cls");
    }
    file.open("burpees.txt");
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
            cout<<"\n\t\t"<<line<<endl;
        }
        file.close();
        system("pause");
        system("cls");
    }
    file.open("squats.txt");
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
            cout<<"\n\t\t"<<line<<endl;
        }
        file.close();
        system("pause");
        system("cls");
    }
    file.open("glute_bridge.txt");
    if(!file)
    {
        cout<<"\nERROR"<<endl;
        cout<<"File Not Found"<<endl;
    }
    else
    {
        string line;
        for (int j=0;j<5;j++){
            cout<<"\n";

        }
        while(file.good())
        {
            getline(file,line);
            cout<<"\n\t\t"<<line<<endl;
        }
        file.close();
        system("pause");
        system("cls");
    }
    file.open("planks.txt");
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
            cout<<"\n\t\t"<<line<<endl;
        }
        file.close();
        system("pause");
        system("cls");
    }
    file.open("crunches.txt");
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
            cout<<"\n\t\t"<<line<<endl;
        }
        file.close();
        system("pause");
        system("cls");
    }
}

void Workout::workout_plan()
{
    if (N->Flag==1)
        underweight_workout();
    else if (N->Flag==2)
        normal_workout();
    else if (N->Flag==3)
        overweight_workout();
}
