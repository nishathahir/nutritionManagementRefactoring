#ifndef CALORIECOUNT_H
#define CALORIECOUNT_H
#include"nutrition.h"
#include"diet.h"

class CalorieCount
{
    private:
        int SnNo,BrNo,LuNo,DiNo,miles;
        char ch[2];
        static float CalCons;
        static float CalsBurnt;
        Nutrition N;
        Diet *D;

    public:
        void CalorieConsumed();
        void CalorieBurnt();
        void CalorieReport();
};
#endif // _CALORIECOUNT_H_
