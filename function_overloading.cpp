#include <iostream>

using namespace std;

class Arithmetic{

public:
    void sum(int a, int b){
        cout << "\nSum of two integers: " << a+b;
    }
    void sum(int a, int b, int c){
        cout << "\nSum of three integers: " << a+c+b;
    }
    double sum(double a,double b){
        return a+b;
    }
};

int main() {

    Arithmetic ob;

    ob.sum(1,2);

    ob.sum(4,5,6);

    cout << "\nSum of two integers: " << ob.sum(324.35,325.34);

}


// BILL USING FUNCTION OVERLOAD
