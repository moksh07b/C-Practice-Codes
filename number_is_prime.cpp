#include <iostream>
using namespace std;

int main() {
    int n, d=0,j;

    cout << "Input number: ";
    cin >> n;


        for (j = 1; j <= (n/2); j++){
                if (n % j == 0){
                        d++;
                        break;
                }

        }
        if(d == 1){
            cout << n <<" is prime number\n";
        }

}
