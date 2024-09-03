#include <iostream>
using namespace std;

void add(int a, int b){

    cout << "Sum of numbers is: " << a+b << "\n";
}

void sub(int a, int b){

    cout << "Difference of numbers is: " << a-b << "\n";
}

void mul(int a, int b){

    cout << "Sum of numbers is: " << a*b << "\n";
}

void division(float a, float b){

    cout << "Sum of numbers is: " << a/b << "\n";
}

// Functions for doing calculations

int main() {
    int a, b, c;

    cout << "Input number: ";
    cin >> a;
    cout << "Input number: ";
    cin >> b;

    cout << "Input 1 for Addition\n";
    cout << "Input 2 for Subtraction\n";
    cout << "Input 3 for Multiplication\n";
    cout << "Input 4 for Division\n";
    cout << "Input: ";
    cin >> c;

    switch(c)       //Switch case for options
    {
    case 1:
        add(a,b);
        break;
    case 2:
        sub(a,b);
        break;
    case 3:
        mul(a,b);
        break;
    case 4:
        division(a,b);
        break;
    default:
        cout << "Invalid Syntax";
    }

    cout << "+++++++++++++++++++++++++++++++++++++++++++";

    return 0;

}
