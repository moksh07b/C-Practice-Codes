#include <iostream>
using namespace std;

class complex1
{
private:
    int real, imag;

public:

    void input(){
        cout << "Input real part: ";
        cin >> real;
        cout << "Input imaginary part: ";
        cin >> imag;
    }

    void show() {
        cout << real << " + " << imag << "i\n";
    }

    complex1 mul(complex1 l){
        complex1 prod;

        prod.real = real * l.real;
        prod.imag = imag * l.imag;

        return prod;

    }
};

int main(){

    complex1 one, two, mul;

    cout << "Input Complex number 1: \n";
    one.input();
    cout << "Input Complex number 2: \n";
    two.input();

    cout << "Complex number 1 is: ";
    one.show();
    cout << "Complex number 2 is: ";
    two.show();

    mul = two.mul(one);
    cout << "Product of Complex number is: ";
    mul.show();

}
