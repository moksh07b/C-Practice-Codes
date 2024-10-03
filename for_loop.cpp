#include <iostream>
using namespace std;

int main(){
    int i, a, b, sum=0;

    cout << "Input: ";
    cin >> a;
    cout << "Input: ";
    cin >> b;

    for (i = 1 ; i <= b; i=i ){
            sum = sum + a;

    }
    cout << sum;
}
