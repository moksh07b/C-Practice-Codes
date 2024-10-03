#include <iostream>
using namespace std;

// function with neither return type nor argument.

void factorial1()
{
    int n, fac = 1;
    cout << "Input number: ";
    cin >> n;

    for(int i = 2; i <= n; i++){
        fac *= i;
    }

    cout << "Factorial of a number is: " << fac << "\n" ;
}

// function with return type but not argument.


int factorial2()
{
    int n, fac = 1;
    cout << "Input number: ";
    cin >> n;

    for(int i = 2; i <= n; i++){
        fac *= i;
    }
    return (fac);
}

// function with no return type but with argument.


void factorial3(int n){
    int fac = 1;

    for(int i = 2; i <= n; i++){
        fac *= i;
    }
    cout << "Factorial of " << n << " is: " << fac;
}

// function with both return type and with argument.


int factorial4(int n){
    int fac = 1, i;

    for(i = 2; i <= n; i++){
        fac *= i;
    }
    return fac;
}


int BiCoef(int n, int r){
    int nfac = 1, i, rfac = 1, nrfac = 1;

    for(i = 2; i <= n; i++){
        nfac *= i;
    }
    for(i = 2; i <= r; i++){
        rfac *= i;
    }
    for(i = 2; i <= (n-r); i++){
        nrfac *= i;
    }
    return nfac / (rfac * nrfac);
}



int main () {

    int n, r;
    cout << "Input number: ";
    cin >> n;
    cout << "Input number: ";
    cin >> r;

    cout << "Binomial Coefficient of "<< n << " and " << r << " is: " <<(factorial4(n))/(factorial4(r)*factorial4(n-r)) ;
}
