#include <iostream>

using namespace std;

int main() {
    char a[40], d;
    int i;

    cout << "Input your name: ";
    cin.get(a,40);
    cout << "Enter search char: ";
    cin >> d;

    cout << a << "\n";
    for(i = 0; a[i] != '\0'; i++){
            if(a[i] == d){
                    cout << "Character found at " << i+1 << "th position.\n";
            }
    }
}
