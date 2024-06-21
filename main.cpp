#include <iostream>

using namespace std;

int main() {
    float waga, wzrost, bmi;

    cout << "Podaj wage w kilogramach: ";
    cin >> waga;

    cout << "Podaj wzrost w metrach: ";
    cin >> wzrost;

    bmi = waga / (wzrost * wzrost);

    cout << "Twoje BMI wynosi: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Masz niedowage." << endl;
    } else if (bmi >= 18.5 && bmi < 24.9) {
        cout << "Twoja waga jest prawidlowa." << endl;
    } else if (bmi >= 25 && bmi < 29.9) {
        cout << "Masz nadwage." << endl;
    } else {
        cout << "Masz otylosc." << endl;
    }

    return 0;
}
