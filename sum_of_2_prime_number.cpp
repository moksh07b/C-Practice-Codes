
#include <iostream>
using namespace std;

int main() {
    int n, d, sum = 0,k=0;

    cout << "Input number: ";
    cin >> n;
    int p[n/2];

    for (int i = 2; i <= n; i++) {
            d = 0;
        for (int j = 2; j <= (i/2); j++){
                if (i % j == 0){
                        d++;
                        break;
                }
        }

        if(d == 0){
            p[k] = i;
            k++;

        }
    }

        for (int m = k-1; m >= k/2; m--){
            for(int j = 0; j < k/2; j++){
                if( (p[m]+p[j]) == n){
                        cout << n << " is sum of prime " << p[m] << " and " << p[j] << "\n";
                }
            }
        }

}
