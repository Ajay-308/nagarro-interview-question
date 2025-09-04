#include <iostream>
using namespace std;

int multiply(int a, int b) {
    int result = 0;
    for (int i = 0; i < b; i++) {
        result += a;
    }
    return result;
}

int power(int base, int exp) {
    if (exp == 0) return 1;

    int result = base;
    for (int i = 1; i < exp; i++) {
        result = multiply(result, base);
    }
    return result;
}

int main() {
    int base, exp;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exp;

    cout << base << "^" << exp << " = " << power(base, exp) << endl;
    return 0;
}
