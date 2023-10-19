#include <iostream>
#include <fstream>
#include "caloriecount.cpp"
#include "diet.cpp"
#include "nutrition.cpp"
#include "workout.cpp"

using namespace std;

main() {
  int ch1, ch2;
  std::string fname;
  Nutrition N;
  Diet D;
  Workout W;
  CalorieCount C;

  system("Color 0A");
  cout << "                                                                                                   " << endl;
  cout << "                                    NUTRITION MANAGEMENT SYSTEM                                    " << endl;
  cout << "                                                                             -T.Nisha Fathima      " << endl;
  cout << "                                                                             -19PT14               " << endl;
  system("pause");
  system("cls");

  home:
  cout << "             " << endl;
  cout << "             1  >> Add New Patient Record                        " << endl;
  cout << "             2  >> View Patient Report                           " << endl;
  cout << "             3  >> Exit Application                              " << endl;
  cout << "" << endl;
  cout << " Enter your choice :";
  cin >> ch1;

  while (ch1 < 1 || ch1 > 3) {
    cout << "Invalid Entry." << endl;
    cout << " Enter your choice :";
    cin >> ch1;
  }

  system("cls");

  switch (ch1) {
    case 1:
      N.GetValidData();
      N.BMICalculator();

      home2:
      cout << "             " << endl;
      cout << "             1  >> Generate BMI Report                           " << endl;
      cout << "             2  >> View Recommended Food Timings                 " << endl;
      cout << "             3  >> View Diet Plan                                " << endl;
      cout << "             4  >> View Workout Plan                             " << endl;
      cout << "             5  >> Add Daily Activity                            " << endl;
      cout << "             6  >> Return to Home Page                           " << endl;
      cout << "" << endl;
      cout << " Enter your choice :";
      cin >> ch2;

      system("pause");
      system("cls");

      while (ch2 < 1 || ch2 > 6) {
        cout << "Invalid Entry." << endl;
        cout << " Enter your choice :";
        cin >> ch2;
      }

      switch (ch2) {
        case 1:
          D.Risk();
          system("pause");
          system("cls");
          goto home2;
        case 2:
          D.FoodTimings();
          goto home2;
        case 3:
          D.DietChart();
          system("cls");
          goto home2;
        case 4:
          W.workout_plan();
          goto home2;
        case 5:
          C.CalorieConsumed();
          C.CalorieBurnt();
          C.CalorieReport();
          system("pause");
          system("cls");
          goto home2;
        case 6:
          system("pause");
          system("cls");
          goto home;
      }
      break;
    case 2:
      fstream file;
      cout << "\n\nEnter the patient's file name to be opened : ";
      cin.ignore();
      gets(fname);
      system("cls");
      file.open(fname, ios::in);

      if (!file) {
        cout << "\n\n\nFile Not Found!";
        system("pause");
        system("cls");
        goto home;
      } else {
        std::string info;
        cout << "" << endl;

        while (file.good()) {
          getline(file, info);
          cout << info << "\n";
        }

        cout << "" << endl;

        system("pause");
        system("cls");
      }

      goto home;
    case 3:
      system("cls");
      break;
  }

  return 0;
}
