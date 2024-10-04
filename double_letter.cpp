#include <iostream>

using namespace std;

int main() {
    char a[40];
    int i, d=0;

    cout << "Input your name: ";
    cin.get(a,40);

    cout << a << "\n";
    for(i = 0; a[i] != '\0'; i++){
            if(a[i] == a[i+1]){
                d++;
            }
    }
    cout << "Double letter: " << d;
}
