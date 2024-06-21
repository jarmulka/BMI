#include "bmi.h"
#include <iostream>

using namespace std;


float calculateBMI(float waga, float wzrost) {
    return waga / (wzrost * wzrost);
}


void interpretBMI(float bmi) {
    if (bmi < 18.5) {
        cout << "Masz niedowage." << endl;
    } else if (bmi >= 18.5 && bmi < 24.9) {
        cout << "Twoja waga jest prawidlowa." << endl;
    } else if (bmi >= 25 && bmi < 29.9) {
        cout << "Masz nadwage." << endl;
    } else {
        cout << "Masz otylosc." << endl;
    }
}
