#include<iostream>
using namespace std;

int main() {
    int a;

    cout << "Input Sales: ";
    cin >> a;
    if(a >= 10000) {
        cout << "Discount is Rs. "<< (a*20)/100 <<"\n";
        cout << "Total amount is Rs. " << a - ((a*20)/100) <<"\n";
    }
    else if (a >= 7500) {
        cout << "Discount is Rs. "<< (a*15)/100 <<"\n";
        cout << "Total amount is Rs. " << a - ((a*15)/100) <<"\n";
    }
    else if (a >= 5000) {
        cout << "Discount is Rs. "<< (a*10)/100 <<"\n";
        cout << "Total amount is Rs. " << a - ((a*10)/100) <<"\n";
    }
    else if (a >= 2500) {
        cout << "Discount is Rs. "<< (a*5)/100 <<"\n";
        cout << "Total amount is Rs. " << a - ((a*5)/100) <<"\n";
    }
    else {
        cout << "No Discount\n";
        cout << "Total amount is Rs. " <<a<<"\n";
    }
}

