#ifndef NUTRITION_H
#define NUTRITION_H

class Diet;//forward declaration

class Nutrition
{
    private:
        std::string Name;
        std::string Address;
        std::string ContactNo;
        std::string Sex;
        std::string FileName;
        int Age;
        float Height;
        float Weight;
        int BloodPressure;
        float BMI;
        std::string FoodPreferred;
        friend class Diet;
    public:
        void GetValidData();
        void BMICalculator();
        static int Flag;
        static int FoodCategory;

};

#endif // _NUTRITION_H_
