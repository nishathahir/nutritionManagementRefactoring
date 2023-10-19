#include<iostream>
#include<fstream>
#include"caloriecount.cpp"
#include"diet.cpp"
#include"nutrition.cpp"
#include"workout.cpp"

using namespace std;

 main()
{
    int ch1
    int ch2;
    std::string fname;
    Nutrition N;
    Diet D;
    Workout W;
    CalorieCount C;
    system("Color 0A");
    cout<<"                                                                                                   "<<endl;
    cout<<"                                    NUTRITION MANAGEMENT SYSTEM                                    "<<endl;
    cout<<"                                                                             -T.Nisha Fathima      "<<endl;
    cout<<"                                                                             -19PT14               "<<endl;
    system("pause");
    system("cls");
    home:
    cout<<"             1  >> Add New Patient Record                        \n";
    cout<<"             2  >> View Patient Report                           \n";
    cout<<"             3  >> Exit Application                              \n";
    cout<<"\n Enter your choice :";
    cin>>ch1;
    while( (ch1<1)  (ch1>3) )
    {
        cout<<"Invalid Entry."<<endl;
        cout<<" Enter your choice :";
        cin>>ch1;

    }
    system("cls");
    if(ch1==1)
    {
        N.GetValidData();
        N.BMICalculator();
        home2:
        cout<<" _ \n";
        cout<<"                                           	                     \n";
        cout<<"             1  >> Generate BMI Report                           \n";
        cout<<"             2  >> View Recommended Food Timings                 \n";
        cout<<"             3  >> View Diet Plan                                \n";
        cout<<"             4  >> View Workout Plan                             \n";
        cout<<"             5  >> Add Daily Activity                            \n";
        cout<<"             6  >> Return to Home Page                           \n";
        cout<<" _ \n";
        cout<<"\n Enter your choice : ";
        cin>>ch2;
        system("pause");
        system("cls");
        while(ch2<1  ch2>6)
        {
            cout<<"Invalid Entry."<<endl;
            cout<<" Enter your choice : ";
            cin>>ch2;
        }
        if (ch2==1)
        {
            D.Risk();
            system("pause");
            system("cls");
            goto home2;
        }
        else if (ch2==2)
        {
            D.FoodTimings();
            goto home2;
        }
        else if (ch2==3)
        {
            D.DietChart();
            system("cls");
            goto home2;
        }
        else if (ch2==4)
        {
            W.workout_plan();
            goto home2;
        }
        else if(ch2==5)
        {
            C.CalorieConsumed();
            C.CalorieBurnt();
            C.CalorieReport();
            system("pause");
            system("cls");
            goto home2;
        }
        else if (ch2==6)
            system("pause");
            system("cls");
            goto home;

    }
    else if(ch1==2)
    {
    fstream file;
    cout<<"\n\nEnter the patient's file name to be opened : ";
    cin.ignore();
    gets(fname);
    system("cls");
	file.open(fname, ios::in);
		if(!file)
		{
		cout<<"\n\n\nFile Not Found!";
		system("pause");
		system("cls");
		goto home;
		}
		else
		{
		    std::string info;
                cout<<""<<endl;
			while(file.good())
			{
                getline(file,info);
                cout<<info<<"\n";
			}
             cout<<""<<endl;

			system("pause");
			system("cls");
        }
        goto home;
    }
    else if(ch1==3)
        system("cls");

}
