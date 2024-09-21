
#include<iostream>
using namespace std;

int main() {
    char a;

    cout << "Input a character";
    cin >> a;
    if(a > 'A' && a < 'Z'){
        cout << "Character is Upper case\n";
    }
    else if(a > 'a' && a < 'z') {
        cout << "Character is Lower case\n";
    }
    else if(a > '0' && a < '9') {
        cout << "Character is Number\n";
    }
    else {
        cout << "Character is symbol\n";
    }


}
