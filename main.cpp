#include <iostream>
#include <cmath>
using namespace std;
void checkNumber(int num)
{
    if (num>0)
        cout<<"Positive number\n";
    else if (num<0)
        cout<<"Negative number\n";
    else
        cout<<"zero\n";
    if (num%2==0)
        cout<<"Even number\n";
    else
        cout<<"odd number\n";
}

void calculate(int num)
{
    cout<<"square:"<<num*num<<endl;
    cout<<"square root:"<<sqrt(abs(num))<<endl;
}

int main()
{
    int number;
    cout<<"Enter a number:";
    cin>>number;

    checkNumber(number);
    calculate(number);

    return 0;
}
