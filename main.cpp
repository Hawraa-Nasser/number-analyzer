#include <iostream>
#include <cmath>
using namespace std;

void checkNumber(int num)
{
    if (num > 0)
        cout << "Positive number\n";
    else if (num < 0)
        cout << "Negative number\n";
    else
        cout << "Zero\n";

    if (num % 2 == 0)
        cout << "Even number\n";
    else
        cout << "Odd number\n";
}
void calculate(int num)
{
    cout << "Square: " << num * num << endl;
    cout << "Square root: " << sqrt(abs(num)) << endl;
}

// Added by: Fatima Ali
// Feature: Convert number to Binary
void toBinary(int num) {
    int binary[32], i = 0;
    int n = abs(num);

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    cout << "Binary: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }
    cout << endl;
}
// Added by:muntaha salem
// Feature: Check if number is Prime
void checkPrime(int num) {
    if (num <= 1) {
        cout << "Not a prime number\n";
        return;
    }

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            cout << "Not a prime number\n";
            return;
        }
    }

    cout << "Prime number\n";
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    checkNumber(number);
    calculate(number);
    toBinary(number);
    checkPrime(number);

    return 0;
}
