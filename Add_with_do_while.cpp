#include <iostream>
using namespace std;

int main () {
    int n, sum = 0;


    do {
            cout << "Input Number: ";
            cin >> n;   // Last number won't be added.
            sum += n;
    }while(n > 0);

    cout << "Sum is: " << sum-n;
}
