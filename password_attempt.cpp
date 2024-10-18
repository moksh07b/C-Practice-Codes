#include <iostream>
using namespace std;

int main () {
    int sum = 0;
    string a = "ABCdef", n;


    do {
            cout << "Input Password: ";
            cin >> n;
            if (n != a){
                cout << "Incorrect Password\n";
            }
            else{
                cout << "Correct Password\n";
            }
            sum++;
    }while(n != a);

    cout << "Number of attempts is: " << sum;
}
