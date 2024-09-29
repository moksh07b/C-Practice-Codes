#include <iostream>
using namespace std;

int main () {
    int per;

    cout << "Input marks percentage: ";

    cin >> per;

    if(per >= 33) {
        cout << "Student Pass\n";
    }
    else {
        cout << "Student fail\n";
    }
    cout << "Done";
}

