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
    cout<<"\t\t\tEnter the Serial No. of the diet you consumed :"<<endl;
    cout<<"\t\t\tBreakfast :";
    cin>>BrNo;
    while (BrNo<1 || BrNo>7)
    {
        cout<<"\t\t\tInvalid Entry"<<endl;
        cout<<"\t\t\tBreakfast :";
        cin>>BrNo;
    }
    cout<<"\t\t\tLunch :";
    cin>>LuNo;
    while (LuNo<1 ||LuNo>7)
    {
        cout<<"\t\t\tInvalid Entry"<<endl;
        cout<<"\t\t\tLunch :";
        cin>>LuNo;
    }
    cout<<"\t\t\tDinner :";
    cin>>DiNo;
    while (DiNo<1 || DiNo>7)
    {
        cout<<"\t\t\tInvalid Entry"<<endl;
        cout<<"\t\t\tDinner :";
        cin>>DiNo;
    }
    cout<<"\t\t\tSnacks :";
    cin>>SnNo;
    while (SnNo<1 || SnNo>7)
    {
        cout<<"\t\t\tInvalid Entry"<<endl;
        cout<<"\t\t\tSnacks :";
        cin>>SnNo;
    }
    if (N.Flag==1)
    {
        if (N.FoodCategory==1)
        {
            if (BrNo==1)
                CalCons+=304;
            else if (BrNo==2)
                CalCons+=320;
            else if (BrNo==3)
                CalCons+=280;
            else if (BrNo==4)
                CalCons+=278;
            else if (BrNo==5)
                CalCons+=270;
            else if (BrNo==6)
                CalCons+=265;
            else if (BrNo==7)
                CalCons+=286;
            if (LuNo==1)
                CalCons+=300;
            else if (LuNo==2)
                CalCons+=401;
            else if (LuNo==3)
                CalCons+=438;
            else if (LuNo==4)
                CalCons+=370;
            else if (LuNo==5)
                CalCons+=320;
            else if (LuNo==6)
                CalCons+=370;
            else if (LuNo==7)
                CalCons+=340;
            if (DiNo==1)
                CalCons+=300;
            else if (DiNo==2)
                CalCons+=278;
            else if (DiNo==3)
                CalCons+=320;
            else if (DiNo==4)
                CalCons+=300;
            else if (DiNo==5)
                CalCons+=340;
            else if (DiNo==6)
                CalCons+=350;
            else if (DiNo==7)
                CalCons+=220;
            if (SnNo==1)
                CalCons+=400;
            else if (SnNo==2)
                CalCons+=200;
            else if (SnNo==3)
                CalCons+=200;
            else if (SnNo==4)
                CalCons+=312;
            else if (SnNo==5)
                CalCons+=273;
            else if (SnNo==6)
                CalCons+=286;
            else if (SnNo==7)
                CalCons+=300;
        }
        else if (N.FoodCategory==2)
        {
            if (BrNo==1)
                CalCons+=300;
            else if (BrNo==2)
                CalCons+=240;
            else if (BrNo==3)
                CalCons+=280;
            else if (BrNo==4)
                CalCons+=280;
            else if (BrNo==5)
                CalCons+=281;
            else if (BrNo==6)
                CalCons+=264;
            else if (BrNo==7)
                CalCons+=350;
            if (LuNo==1)
                CalCons+=417;
            else if (LuNo==2)
                CalCons+=300;
            else if (LuNo==3)
                CalCons+=400;
            else if (LuNo==4)
                CalCons+=450;
            else if (LuNo==5)
                CalCons+=387;
            else if (LuNo==6)
                CalCons+=350;
            else if (LuNo==7)
                CalCons+=420;
            if (DiNo==1)
                CalCons+=348;
            else if (DiNo==2)
                CalCons+=348;
            else if (DiNo==3)
                CalCons+=300;
            else if (DiNo==4)
                CalCons+=340;
            else if (DiNo==5)
                CalCons+=356;
            else if (DiNo==6)
                CalCons+=340;
            else if (DiNo==7)
                CalCons+=289;
            if (SnNo==1)
                CalCons+=400;
            else if (SnNo==2)
                CalCons+=200;
            else if (SnNo==3)
                CalCons+=200;
            else if (SnNo==4)
                CalCons+=312;
            else if (SnNo==5)
                CalCons+=273;
            else if (SnNo==6)
                CalCons+=286;
            else if (SnNo==7)
                CalCons+=300;
        }
    }
    else if (N.Flag==2)
    {
        if (N.FoodCategory==1)
        {
            if (BrNo==1)
                CalCons+=304;
            else if (BrNo==2)
                CalCons+=320;
            else if (BrNo==3)
                CalCons+=280;
            else if (BrNo==4)
                CalCons+=278;
            else if (BrNo==5)
                CalCons+=270;
            else if (BrNo==6)
                CalCons+=265;
            else if (BrNo==7)
                CalCons+=286;
            if (LuNo==1)
                CalCons+=300;
            else if (LuNo==2)
                CalCons+=401;
            else if (LuNo==3)
                CalCons+=438;
            else if (LuNo==4)
                CalCons+=370;
            else if (LuNo==5)
                CalCons+=320;
            else if (LuNo==6)
                CalCons+=370;
            else if (LuNo==7)
                CalCons+=340;
            if (DiNo==1)
                CalCons+=300;
            else if (DiNo==2)
                CalCons+=278;
            else if (DiNo==3)
                CalCons+=320;
            else if (DiNo==4)
                CalCons+=300;
            else if (DiNo==5)
                CalCons+=340;
            else if (DiNo==6)
                CalCons+=350;
            else if (DiNo==7)
                CalCons+=220;
            if (SnNo==1)
                CalCons+=400;
            else if (SnNo==2)
                CalCons+=200;
            else if (SnNo==3)
                CalCons+=200;
            else if (SnNo==4)
                CalCons+=312;
            else if (SnNo==5)
                CalCons+=273;
            else if (SnNo==6)
                CalCons+=286;
            else if (SnNo==7)
                CalCons+=300;
        }
        else if (N.FoodCategory==2)
        {
            if (BrNo==1)
                CalCons+=300;
            else if (BrNo==2)
                CalCons+=240;
            else if (BrNo==3)
                CalCons+=280;
            else if (BrNo==4)
                CalCons+=280;
            else if (BrNo==5)
                CalCons+=281;
            else if (BrNo==6)
                CalCons+=264;
            else if (BrNo==7)
                CalCons+=350;
            if (LuNo==1)
                CalCons+=417;
            else if (LuNo==2)
                CalCons+=300;
            else if (LuNo==3)
                CalCons+=400;
            else if (LuNo==4)
                CalCons+=450;
            else if (LuNo==5)
                CalCons+=387;
            else if (LuNo==6)
                CalCons+=350;
            else if (LuNo==7)
                CalCons+=420;
            if (DiNo==1)
                CalCons+=348;
            else if (DiNo==2)
                CalCons+=348;
            else if (DiNo==3)
                CalCons+=300;
            else if (DiNo==4)
                CalCons+=340;
            else if (DiNo==5)
                CalCons+=356;
            else if (DiNo==6)
                CalCons+=340;
            else if (DiNo==7)
                CalCons+=289;
            if (SnNo==1)
                CalCons+=400;
            else if (SnNo==2)
                CalCons+=200;
            else if (SnNo==3)
                CalCons+=200;
            else if (SnNo==4)
                CalCons+=312;
            else if (SnNo==5)
                CalCons+=273;
            else if (SnNo==6)
                CalCons+=286;
            else if (SnNo==7)
                CalCons+=300;
        }
}
    else if (N.Flag==3)
    {
        if (N.FoodCategory==1)
        {
            if (BrNo==1)
                CalCons+=200;
            else if (BrNo==2)
                CalCons+=250;
            else if (BrNo==3)
                CalCons+=280;
            else if (BrNo==4)
                CalCons+=135;
            else if (BrNo==5)
                CalCons+=160;
            else if (BrNo==6)
                CalCons+=175;
            else if (BrNo==7)
                CalCons+=286;
            if (LuNo==1)
                CalCons+=350;
            else if (LuNo==2)
                CalCons+=300;
            else if (LuNo==3)
                CalCons+=340;
            else if (LuNo==4)
                CalCons+=370;
            else if (LuNo==5)
                CalCons+=320;
            else if (LuNo==6)
                CalCons+=297;
            else if (LuNo==7)
                CalCons+=340;
            if (DiNo==1)
                CalCons+=260;
            else if (DiNo==2)
                CalCons+=220;
            else if (DiNo==3)
                CalCons+=250;
            else if (DiNo==4)
                CalCons+=320;
            else if (DiNo==5)
                CalCons+=266;
            else if (DiNo==6)
                CalCons+=220;
            else if (DiNo==7)
                CalCons+=160;
            if (SnNo==1)
                CalCons+=220;
            else if (SnNo==2)
                CalCons+=36;
            else if (SnNo==3)
                CalCons+=60;
            else if (SnNo==4)
                CalCons+=40;
            else if (SnNo==5)
                CalCons+=120;
            else if (SnNo==6)
                CalCons+=120;
            else if (SnNo==7)
                CalCons+=40;
        }
        else if (N.FoodCategory==2)
        {
            if (BrNo==1)
                CalCons+=200;
            else if (BrNo==2)
                CalCons+=250;
            else if (BrNo==3)
                CalCons+=280;
            else if (BrNo==4)
                CalCons+=135;
            else if (BrNo==5)
                CalCons+=160;
            else if (BrNo==6)
                CalCons+=175;
            else if (BrNo==7)
                CalCons+=286;
            if (LuNo==1)
                CalCons+=350;
            else if (LuNo==2)
                CalCons+=300;
            else if (LuNo==3)
                CalCons+=336;
            else if (LuNo==4)
                CalCons+=370;
            else if (LuNo==5)
                CalCons+=320;
            else if (LuNo==6)
                CalCons+=297;
            else if (LuNo==7)
                CalCons+=340;
            if (DiNo==1)
                CalCons+=260;
            else if (DiNo==2)
                CalCons+=220;
            else if (DiNo==3)
                CalCons+=250;
            else if (DiNo==4)
                CalCons+=320;
            else if (DiNo==5)
                CalCons+=266;
            else if (DiNo==6)
                CalCons+=220;
            else if (DiNo==7)
                CalCons+=160;
            if (SnNo==1)
                CalCons+=220;
            else if (SnNo==2)
                CalCons+=36;
            else if (SnNo==3)
                CalCons+=60;
            else if (SnNo==4)
                CalCons+=40;
            else if (SnNo==5)
                CalCons+=58;
            else if (SnNo==6)
                CalCons+=60;
            else if (SnNo==7)
                CalCons+=40;
        }
    }
}
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
        if(N.Flag==1)
            CalsBurnt+=150;
        else if (N.Flag==2)
            CalsBurnt+=200;
        else if(N.Flag==3)
            CalsBurnt+=350;

    }
}

void CalorieCount::CalorieReport()
{
    cout<<"\n\t\t\tCalorie Intake :"<<CalCons;
    cout<<"\n\t\t\tCalories Burnt in Walking :"<<miles*80;
    cout<<"\n\t\t\tCalories Burnt in Workout :"<<CalsBurnt;
    cout<<endl;
}



