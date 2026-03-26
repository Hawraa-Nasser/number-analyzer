
#include <iostream>
#include <cmath>
using namespace std;

//added by Fatima Ali
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

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    checkNumber(number);
    calculate(number);
    toBinary(number);

    return 0;
}