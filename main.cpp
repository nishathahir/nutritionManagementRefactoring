#include<iostream>
#include<fstream>
#include"caloriecount.cpp"
#include"diet.cpp"
#include"nutrition.cpp"
#include"workout.cpp"
#include<windows.h>

using namespace std;

 main()
{
    int ch1,ch2;
    char fname[20];
    Nutrition N;
    Diet D;
    Workout W;
    CalorieCount C;
    system("Color 0A");
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t    ________________________________________________________________________________________________   "<<endl;
    cout<<"\t\t\t\t                                                                                                       "<<endl;
    cout<<"\t\t\t\t    ------------------------------------------------------------------------------------------------   "<<endl;
    cout<<"\t\t\t\t   |                                                                                                |"<<endl;
    cout<<"\t\t\t\t   |                                                                                                |"<<endl;
    cout<<"\t\t\t\t   |                                                                                                |"<<endl;
    cout<<"\t\t\t\t   |                                                                                                |"<<endl;
    cout<<"\t\t\t\t   |                                                                                                |"<<endl;
    cout<<"\t\t\t\t   |                                 NUTRITION MANAGEMENT SYSTEM                                    |"<<endl;
    cout<<"\t\t\t\t   |                                                                                                |"<<endl;
    cout<<"\t\t\t\t   |                                                                                                |"<<endl;
    cout<<"\t\t\t\t   |                                                                          -T.Nisha Fathima      |"<<endl;
    cout<<"\t\t\t\t   |                                                                          -19PT14               |"<<endl;
    cout<<"\t\t\t\t   |                                                                                                |"<<endl;
    cout<<"\t\t\t\t   ------------------------------------------------------------------------------------------------   "<<endl;
    cout<<"\t\t\t\t   ________________________________________________________________________________________________   "<<endl;
    system("pause");
    system("cls");
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    home:
    cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
    cout<<"\t\t\t\t\t\t|                                           	                     |\n";
    cout<<"\t\t\t\t\t\t|             1  >> Add New Patient Record                        |\n";
    cout<<"\t\t\t\t\t\t|             2  >> View Patient Report                           |\n";
    cout<<"\t\t\t\t\t\t|             3  >> Exit Application                              |\n";
    cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
    cout<<"\n\t\t\t\t\t\t Enter your choice :";
    cin>>ch1;
    while( (ch1<1) || (ch1>3) )
    {
        cout<<"Invalid Entry."<<endl;
        cout<<"\t\t\t\t\t\t Enter your choice :";
        cin>>ch1;

    }
    system("cls");
    if(ch1==1)
    {
        N.GetValidData();
        N.BMICalculator();
        home2:
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
        cout<<"\t\t\t\t\t\t|                                           	                     |\n";
        cout<<"\t\t\t\t\t\t|             1  >> Generate BMI Report                           |\n";
        cout<<"\t\t\t\t\t\t|             2  >> View Recommended Food Timings                 |\n";
        cout<<"\t\t\t\t\t\t|             3  >> View Diet Plan                                |\n";
        cout<<"\t\t\t\t\t\t|             4  >> View Workout Plan                             |\n";
        cout<<"\t\t\t\t\t\t|             5  >> Add Daily Activity                            |\n";
        cout<<"\t\t\t\t\t\t|             6  >> Return to Home Page                           |\n";
        cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
        cout<<"\n\t\t\t\t\t\t Enter your choice : ";
        cin>>ch2;
        system("pause");
        system("cls");
        while(ch2<1 || ch2>6)
        {
            cout<<"Invalid Entry."<<endl;
            cout<<"\t\t\t\t\t\t Enter your choice : ";
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
		cout<<"\n\n\n\t\t\t\t\t\tFile Not Found!";
		system("pause");
		system("cls");
		goto home;
		}
		else
		{
		    std::string info;
                        cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"\t\t\t\t\t\t--------------------------------------------------------------------------"<<endl;
			while(file.good())
			{
                getline(file,info);
                cout<<info<<"\n\t\t\t\t\t\t";
			}
             cout<<"--------------------------------------------------------------------------"<<endl;

			system("pause");
			system("cls");
        }
        goto home;
    }
    else if(ch1==3)
        system("cls");

}
