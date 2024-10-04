#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
    int r, g, c = 0;
    srand(time(0));
    r = (rand() % 100) + 1; // 42

    do {
            cout << "Guess the number: ";
            cin >> g;
            if (g > r+5){
                cout << "Number too large, go down\n";
                c++;
            }
            else if (g < r-5){
                cout << "Number too small, go up\n";
                c++;
            }
            else if (g >= r-5 && g < r){
                cout << "too close, go up\n";
                c++;
            }
            else  if (g <= r+5 && g > r){
                cout << "too close, go down\n";
                c++;
            }
            else {
                cout << "Congratulations you have guessed the number.\n";
                c++;
                cout << "Number of attempts: "<< c;
            }
    }while (g != r);

}
