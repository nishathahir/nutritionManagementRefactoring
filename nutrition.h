#ifndef NUTRITION_H
#define NUTRITION_H

class Diet;//forward declaration

class Nutrition
{
    private:
        std::string Name;
        std::string Address;
        char ContactNo[12];
        char Sex[5];
        char FileName[10];
        int Age;
        float Height;
        float Weight;
        int BloodPressure;
        float BMI;
        char FoodPreferred[5];
        friend class Diet;
    public:
        void GetValidData();
        void BMICalculator();
        static int Flag;
        static int FoodCategory;

};

#endif // _NUTRITION_H_
