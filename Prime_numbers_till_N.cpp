
#include <iostream>
using namespace std;

int main() {
    int n, d, j;

    cout << "Input number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
            d = 0;
        for (j = 1; j <= (i/2); j++){
                if (i % j == 0)
                {
                        d++;
                }
        }
        if(d == 1){
            cout << i << "\n";
        }
    }

}
