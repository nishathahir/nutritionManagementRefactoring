#include<iostream>
#include<string.h>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include"nutrition.h"
using namespace std;

int Nutrition::Flag=0;
int Nutrition::FoodCategory=0;

void Nutrition::GetValidData()
{
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\tPatient's File Name :"<<ends;
    cin>>FileName;
    cin.ignore();
    ofstream PatientFile;
    cout<<endl;
    PatientFile.open(FileName);
    if(!FileName)
    {
        cout<<"File Not Found "<<endl;
    }
    else
    {
        cout<<"\t\t\t\t-----------------------------------------------------------------------------------------------"<<endl;
        cout<<"\n\t\t\t\t Name :"<<ends;
        getline(cin,Name);
        PatientFile<<"\t\t\t\t\t\tName : "<<Name<<endl;
        cout<<"\n\t\t\t\t Address : "<<ends;
        getline(cin,Address);
        PatientFile<<"Address : "<<Address<<endl;
        cout<<"\n\t\t\t\t Contact No. : "<<ends;
        cin>>ContactNo;
        while(strlen(ContactNo)!=10)
        {
            cout<<"\n\t\t\t\t Invalid Entry"<<endl;
            cout<<"\t\t\t\t Contact No. : "<<ends;
            cin>>ContactNo;
        }
        PatientFile<<"Contact No.: "<<ContactNo<<endl;
        cout<<"\n\t\t\t\t Sex(m/f/o) : "<<ends;
        cin>>Sex;
        while((strcmp("m",Sex)!=0) && (strcmp("f",Sex)!=0) && (strcmp("o",Sex)!=0) )
        {
            cout<<"\n\t\t\t\tInvalid Entry"<<endl;
            cout<<"\t\t\t\t Sex(m/f/o) : "<<ends;
            cin>>Sex;
        }
        if (strcmp("m",Sex)==0)
            PatientFile<<"Sex : Male"<<endl;
        else if(strcmp("f",Sex)==0)
            PatientFile<<"Sex : Female"<<endl;
        else if(strcmp("o",Sex)==0)
            PatientFile<<"Sex: Other"<<endl;
        cout<<"\n\t\t\t\t Age : "<<ends;
        cin>>Age;
        while (Age<0)
        {
            cout<<"\n\t\t\t\t Invalid Entry."<<endl;
            cout<<"\t\t\t\t Age : "<<ends;
            cin>>Age;
        }
        if (Age>0 && Age<14)
        {
            cout<<"\n\t\t\t\t Consult a pediatric nutritionist."<<endl;
        }
        PatientFile<<"Age: "<<Age<<endl;
        cout<<"\n\t\t\t\t Height(in cm) : "<<ends;
        cin>>Height;
        PatientFile<<"Height(in cm) : "<<Height<<endl;
        Height=Height*0.01;
        cout<<"\n\t\t\t\t Weight(in kg) : "<<ends;
        cin>>Weight;
        PatientFile<<"Weight(in kg) : "<<Weight<<endl;
        cout<<"\n\t\t\t\t Blood Pressure : "<<ends;
        cin>>BloodPressure;
        while((BloodPressure<45) || (BloodPressure>190))
        {
            cout<<"\n\t\t\t\t Blood Pressure : "<<ends;
            cin>>BloodPressure;
        }
        PatientFile<<"Blood Pressure: "<<BloodPressure<<endl;
        cout<<"\n\t\t\t\t Vegeterian/Non-Vegeterian(v/nv) : "<<ends;
        cin>>FoodPreferred;
        if (strcmp("v",FoodPreferred)==0)
        {
            FoodCategory=1;
            PatientFile<<"Vegeterian/Non-Vegeterian(v/nv) : Vegetarian diet";
        }
        else if(strcmp("nv",FoodPreferred)==0)
         {
            FoodCategory=2;
            PatientFile<<"Vegeterian/Non-Vegeterian(v/nv) : Non-Vegetarian diet";
         }
        while((FoodCategory!=1)&&(FoodCategory!=2))
        {
            cout<<"\n\t\t\t\t Invalid Entry "<<endl;
            cout<<"\t\t\t\t Vegeterian/Non-Vegeterian(v/nv) : "<<ends;
            cin>>FoodPreferred;
            if (strcmp("v",FoodPreferred)==0)
            {
                FoodCategory=1;
                PatientFile<<"Vegeterian/Non-Vegeterian(v/nv) : Vegetarian diet";
            }
            else if(strcmp("nv",FoodPreferred)==0)
            {
                FoodCategory=2;
                PatientFile<<"Vegeterian/Non-Vegeterian(v/nv) : Non-Vegetarian diet";
            }
        }
    }
}

void Nutrition::BMICalculator()
{
    ofstream PatientFile;
    BMI=Weight/(Height*Height);
    cout<<"\n\t\t\t\t Your BMI is :"<<BMI<<endl;
    if(BMI<16)
    {
        cout<<"\n\t\t\t\t BMI Analysis : Underweight(Severe Thinness)"<<endl;
        PatientFile<<"BMI Analysis : Underweight(Severe Thinness)"<<endl;

    }
    else if(BMI>=16 && BMI<17)
    {
        cout<<"\n\t\t\t\t BMI Analysis : Underweight(Moderate Thinness)"<<endl;
        PatientFile<<"BMI Analysis : Underweight(Moderate Thinness)"<<endl;

    }
    else if(BMI>=17 && BMI<18.5)
    {
        cout<<"\n\t\t\t\t BMI Analysis : Underweight(Mild Thinness)"<<endl;
        PatientFile<<"BMI Analysis : Underweight(Mild Thinness)"<<endl;
    }
    else if(BMI>=18.5 && BMI<25)
    {
        cout<<"\n\t\t\t\t BMI Analysis : Normal"<<endl;
        PatientFile<<"BMI Analysis : Normal"<<endl;
    }
    else if (BMI>=25 && BMI<30)
    {
        cout<<"\n\t\t\t\t BMI Analysis : Overweight."<<endl;
        PatientFile<<"BMI Analysis : Overweight."<<endl;
    }
    else if (BMI>=30 && BMI<35)
    {
        cout<<"\n\t\t\t\t BMI Analysis : Overweight(Obese Class I)"<<endl;
        PatientFile<<"BMI Analysis : Overweight(Obese Class I)"<<endl;
    }
    else if(BMI>=35 && BMI<40)
    {
        cout<<"\n\t\t\t\t BMI Analysis : Overweight(Obese Class II)"<<endl;
        PatientFile<<"\n\t\t\t\t BMI Analysis : Overweight(Obese Class II)"<<endl;
    }
    else if(BMI>40 && BMI<150)
    {
        cout<<"\n\t\t\t\t BMI Analysis : Overweight(Obese Class III)"<<endl;
        PatientFile<<"\n\t\t\t\t BMI Analysis : Overweight(Obese Class III)"<<endl;
    }
    else if(BMI>150 && BMI<10)
    {
        cout<<"\n\t\t\t\t Height/Weight not valid"<<endl;
    }
    cout<<"\n\t\t\t\t-----------------------------------------------------------------------------------------------"<<endl;
    if (BMI<18.5)
        Flag=1;
    else if(BMI>=18.5 && BMI<25)
        Flag=2;
    else if (BMI>=25)
        Flag=3;
    system("pause");
    system("cls");
    PatientFile.close();

}
