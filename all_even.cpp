#include <iostream>

using namespace std;

int main() {
    int i, b;
    cout << "Input number: ";
    cin >> b;
    for (i = 2; i <= b; i=i+2){
        cout << "    "<< i<<"\n";
    }
    return 0;

}
