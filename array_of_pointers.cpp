#include <iostream>

using namespace std;

int main() {
    int a[5], *p[5], s, d = 0;;


    for(int i = 0; i < 5; i++){
        cout << "input value: ";
        cin >> a[i];
        p[i] = &a[i];
    }

    for(int i = 0; i < 5; i++){
        cout << *p[i] << "\n";
    }
    cout << "Input number to search: ";
    cin >> s;
    for(int i = 0; i < 5; i++){
        if(*p[i] == s){
            cout << "Number is available";
            d++;
            break;
        }
    }
    if(d != 1){
        cout << "Number not found.";
    }

}
