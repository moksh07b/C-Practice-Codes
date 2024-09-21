#include <iostream>
using namespace std;
int main () {
    int a,b,c;
    cout << "First number: ";
    cin >> a;
    cout << "Second number: ";
    cin >> b;
    cout << "Third number: ";
    cin >> c;
    if (a > b) {
        if(a > c){
            cout << "First number is greatest: "<<a ;
            cout << a<<">"<<c<<">";
        }
        else {
            cout << "Third number is greatest: "<<c;
        }
    }
    else if (b > a) {
        if(b > c){
            cout << "Second number is greatest: "<<b;
        }
        else {
            cout << "Third number is greatest: "<<c;
        }
    }


}
