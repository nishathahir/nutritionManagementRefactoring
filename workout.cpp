void Workout::displayExerciseFromFile(const std::string& fileName) const {
    ifstream file;
    file.open(fileName);

    if (!file) {
        cout << "\nERROR" << endl;
        cout << "File Not Found" << endl;
    } else {
        string line;

        while (file.good()) {
            getline(file, line);
            cout << "\n\t\t" << line << endl;
        }

        file.close();
        system("pause");
        system("cls");
    }
}

void Workout::underweight_workout() const {
    cout << "\n\t\t\t\t\t\tUnderweight can lead to several medical complications." << endl;
    cout << "\n\t\t\t\t\t\tExercises To Gain Weight: How To Bulk Up Muscle Mass Safely:" << endl;
    cout << "\n\t\t\t\t\t\t[1] Push Ups\n\t\t\t\t\t\t[2] Bench Press \n\t\t\t\t\t\t[3] Pull Ups\n\t\t\t\t\t\t[4] Bench Dips \n\t\t\t\t\t\t[5] Squats\n\t\t\t\t\t\t[6] Lunges \n\t\t\t\t\t\t[7] Deadlift\n\t\t\t\t\t\t[8] Overhead Press" << endl;
    cout << "         Lets workout and fit in!!" << endl;
    
    std::vector<std::string> exerciseFiles = {"pushup.txt", "benchpress.txt", "pullups.txt", "benchdips.txt", "squats.txt", "lunges.txt", "deadlift.txt", "overhead_press.txt"};

    for (const auto& fileName : exerciseFiles) {
        displayExerciseFromFile(fileName);
    }
}

void Workout::normal_workout() const {
    cout << "\n\t\t\t\t\t\tGetting regular exercise and keeping your body fit helps lower your risk of chronic problems." << endl;
    cout << "\n\t\t\t\t\t\tAcross the board, physical activity and maintaining fitness usually helps." << endl;
    cout << "\n\t\t\t\t\t\t[1] Push Ups\n\t\t\t\t\t\t[2] Squats\n\t\t\t\t\t\t[3] Jumping Jacks\n\t\t\t\t\t\t[4] Hip Bridge \n\t\t\t\t\t\t[5] Plank" << endl;
    cout << "         Lets workout and fit in!!" << endl;

    std::vector<std::string> exerciseFiles = {"pushup.txt", "squats.txt", "jumping_jacks.txt", "hipbridge.txt", "planks.txt"};

    for (const auto& fileName : exerciseFiles) {
        displayExerciseFromFile(fileName);
    }
}

void Workout::overweight_workout() const {
    cout << "\n\t\t\t\t\t\tBeing obese can also increase your risk of developing many potentially serious health conditions including type 2 diabetes, high blood pressure, high cholesterol and heart diseases." << endl;
    cout << "\n\t\t\t\t\t\tCarrying extra fat leads to serious health consequences" << endl;
    cout << "\n\t\t\t\t\t\tThese conditions cause premature death and substantial disability." << endl;
    cout << "\n\t\t\t\t\t\t[1] Skipping\n\t\t\t\t\t\t[2] Burpees\n\t\t\t\t\t\t[3] Squats\n\t\t\t\t\t\t[4] Glute Bridge \n\t\t\t\t\t\t[5] Plank \n\t\t\t\t\t\t[6] Crunches" << endl;
    cout << "         Lets workout and fit in!! It Feels good to be fit and strong !!" << endl;

    std::vector<std::string> exerciseFiles = {"skipping.txt", "burpees.txt", "squats.txt", "glute_bridge.txt", "planks.txt", "crunches.txt"};

    for (const auto& fileName : exerciseFiles) {
        displayExerciseFromFile(fileName);
    }
}

void Workout::workout_plan() const {
    if (N->Flag == 1)
        underweight_workout();
    else if (N->Flag == 2)
        normal_workout();
    else if (N->Flag == 3)
        overweight_workout();
}
