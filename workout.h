#ifndef WORKOUT_H
#define WORKOUT_H
#include"nutrition.h"

class Workout
{
    private:
        Nutrition *N;

    public:
        void Time();
        void underweight_workout();
        void normal_workout();
        void overweight_workout();
        void workout_plan();

};

#endif _WORKOUT_H_

