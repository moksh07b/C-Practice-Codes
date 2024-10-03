#include <iostream>
using namespace std;

float add(int a, int b){

    return a+b;
}

float sub(int a, int b){

    return a - b;
}

float mul(int a, int b){

    return a * b;
}

float division(float a, float b){

    return a / b;
}

float sqr(float a){

    return a * a;
}

float cube(float a){

    return a * a * a;
}

int main() {

    int a, b, c, d, e;

    cout << "Input a:";
    cin >> a;
    cout << "Input b:";
    cin >> b;
    cout << "Input c:";
    cin >> c;
    cout << "Input d:";
    cin >> d;

    e = sub(sqr(a), add(mul(b, c), cube(d)));

    cout << "Answer of equation is: " << e;


}
