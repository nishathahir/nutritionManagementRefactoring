#include<iostream>
#include<fstream>
#include"caloriecount.cpp"
#include"diet.cpp"
#include"nutrition.cpp"
#include"workout.cpp"

int main()
{
    int ch1;
    int ch2;
    std::string fname;
    Nutrition N;
    Diet D;
    Workout W;
    CalorieCount C;
    system("Color 0A");
    std::cout << "\t\t\t\t\t\t|                                            \t                     |\n";
    std::cout<<"\t\t\t\t                                                                                                       "<<std::endl;
    std::cout<<"\t\t\t\t    ------------------------------------------------------------------------------------------------   "<<std::endl;
    std::cout<<"\t\t\t\t   |                                                                                                |"<<std::endl;
    std::cout<<"\t\t\t\t   |                                                                                                |"<<std::endl;
    std::cout<<"\t\t\t\t   |                                                                                                |"<<std::endl;
    std::cout<<"\t\t\t\t   |                                                                                                |"<<std::endl;
    std::cout<<"\t\t\t\t   |                                                                                                |"<<std::endl;
    std::cout<<"\t\t\t\t   |                                 NUTRITION MANAGEMENT SYSTEM                                    |"<<std::endl;
    std::cout<<"\t\t\t\t   |                                                                                                |"<<std::endl;
    std::cout<<"\t\t\t\t   |                                                                                                |"<<std::endl;
    std::cout<<"\t\t\t\t   |                                                                          -T.Nisha Fathima      |"<<std::endl;
    std::cout<<"\t\t\t\t   |                                                                          -19PT14               |"<<std::endl;
    std::cout<<"\t\t\t\t   |                                                                                                |"<<std::endl;
    std::cout<<"\t\t\t\t   ------------------------------------------------------------------------------------------------   "<<std::endl;
    std::cout << "\t\t\t\t\t\t|                                            \t                     |\n";
    system("pause");
    system("cls");
    home:
    std::cout << "\t\t\t\t\t\t|                                            \t                     |\n";
    std::cout<<"\t\t\t\t\t\t|                                           	                     |\n";
    std::cout<<"\t\t\t\t\t\t|             1  >> Add New Patient Record                        |\n";
    std::cout<<"\t\t\t\t\t\t|             2  >> View Patient Report                           |\n";
    std::cout<<"\t\t\t\t\t\t|             3  >> Exit Application                              |\n";
    std::cout << "\t\t\t\t\t\t|                                            \t                     |\n";
    std::cout<<"\n\t\t\t\t\t\t Enter your choice :";
    std::cin>>ch1;
    while( (ch1<1) || (ch1>3) )
    {
        std::cout<<"Invalid Entry."<<std::endl;
        std::cout<<"\t\t\t\t\t\t Enter your choice :";
        std::cin>>ch1;

    }
    system("cls");
    if(ch1==1)
    {
        N.GetValidData();
        N.BMICalculator();
        home2:
        std::cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
        std::cout<<"\t\t\t\t\t\t|                                           	                     |\n";
        std::cout<<"\t\t\t\t\t\t|             1  >> Generate BMI Report                           |\n";
        std::cout<<"\t\t\t\t\t\t|             2  >> View Recommended Food Timings                 |\n";
        std::cout<<"\t\t\t\t\t\t|             3  >> View Diet Plan                                |\n";
        std::cout<<"\t\t\t\t\t\t|             4  >> View Workout Plan                             |\n";
        std::cout<<"\t\t\t\t\t\t|             5  >> Add Daily Activity                            |\n";
        std::cout<<"\t\t\t\t\t\t|             6  >> Return to Home Page                           |\n";
        std::cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
        std::cout<<"\n\t\t\t\t\t\t Enter your choice : ";
        std::cin>>ch2;
        system("pause");
        system("cls");
        while(ch2<1 || ch2>6)
        {
            std::cout<<"Invalid Entry."<<std::endl;
            std::cout<<"\t\t\t\t\t\t Enter your choice : ";
            std::cin>>ch2;
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
    std::fstream file;
    std::cout<<"\n\nEnter the patient's file name to be opened : ";
    std::cin.ignore();
    std::getline(std::cin, fname);
    system("cls");
    file.open(fname, std::ios::in);
        if(!file)
        {
        std::cout<<"\n\n\n\t\t\t\t\t\tFile Not Found!";
        system("pause");
        system("cls");
        goto home;
        }
        else
        {
            std::string info;
            std::cout<<"\t\t\t\t\t\t--------------------------------------------------------------------------"<<std::endl;
            while(file.good())
            {
                std::getline(file,info);
                std::cout<<info<<"\n\t\t\t\t\t\t";
            }
            std::cout<<"--------------------------------------------------------------------------"<<std::endl;

            system("pause");
            system("cls");
        }
        goto home;
    }
    else if(ch1==3)
        system("cls");

    return 0;
}
