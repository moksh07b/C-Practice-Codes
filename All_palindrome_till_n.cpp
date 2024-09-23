
#include <iostream>
using namespace std;

int main() {
    int n, r, sum, l, i, m;
    cout << "Input number: ";
    cin >> n;
    m = n;
    for (i = 10; i <= m; i++){
        n=i;
        sum = 0;
        while (n != 0) {
                r = n % 10;
                n = n / 10;
                sum = (sum * 10) + r;

        }
        if(sum == i){
            cout << i << "\n";
        }
    }
}
