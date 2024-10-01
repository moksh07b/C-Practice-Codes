

#include<iostream>
using namespace std;

int main() {
    int a;

    cout << "Input Distance: ";
    cin >> a;
    if(a >= 100){
        cout << "Fare = Rs.10";
    }
    else if(a>=80) {
        cout << "Fare = Rs.11";
    }
    else if(a>=50) {
        cout << "Fare = Rs.13";
    }
    else if(a>=20) {
        cout << "Fare = Rs.15";
    }
    else {
        cout << "Fare = Rs.18";
    }
}
