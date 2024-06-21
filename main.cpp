#include <iostream>
#include "bmi.h"

using namespace std;

int main() {

    float waga, wzrost, bmi;


    cout << "Podaj wagę w kilogramach: ";
    cin >> waga;

    cout << "Podaj wzrost w metrach: ";
    cin >> wzrost;

    bmi = calculateBMI(waga, wzrost);


    cout << "Twoje BMI wynosi: " << bmi << endl;


    interpretBMI(bmi);

    return 0;
}
