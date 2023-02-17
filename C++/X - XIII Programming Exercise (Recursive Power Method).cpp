#include <iostream>

using namespace std;

double power(double base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else {
        return base * power(base, exponent - 1);
    }
}

int main() {
    double base;
    int exponent;
    string name;

    cout << "Full Name: ";
    getline(cin, name);
    
    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    double result = power(base, exponent);

    cout << base << " raised to the power of " << exponent << " is " << result << endl;

    return 0;
}
