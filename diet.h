#ifndef DIET_H
#define DIET_H
#include"nutrition.h"
#include"diet.h"

class Diet
{
    private:
        Nutrition N;
    public:
        void DietChart();
        void Risk();
        void FoodTimings();
};

#endif // _DIET_H
