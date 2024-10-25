#include <iostream>
#include <string.h>

using namespace std;

int main () {
    char name[40];
    int c = 0;


    cout << "Input your string: ";
    cin.get(name,40);

    for(int i = 0; name[i] != '\0' ;i++){
        if(name[i] >= 'a' && name[i] <= 'z' || name[i] >= 'A' && name[i] <= 'Z'){
            if(name[i+1] ==' '){
            c++;
        }
        }
    }

    cout << "Number of words is: " << c+1;
}
