
#include <iostream>
#include <string.h>

using namespace std;

int main () {
    char name[40], rev[40];
    int c = 0, i;


    cout << "Input your string: ";
    cin.get(name,40);

    /*for(i = 0; name[i] != '\0' ;i++){
            c++;
    }

    for(i = i-1; i >= 0; i--){
        rev[(c-1)-i] = name[i];
    }*/

    strcpy(rev,name);
    strrev(rev);


    if(strcmp(rev,name)==0){
        cout << "String is palindrome.\n";
    }
    else {
        cout << "String is not palindrome.\n";
    }

}
