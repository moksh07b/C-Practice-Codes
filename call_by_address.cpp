#include <iostream>

using namespace std;

void Test1(int *a){

    *a = *a+ 5;
}

void Test2(int a){

    a = a + 5;

}

void Test3(int &a){

    a = a + 5;

}


int main() {
    int a;
    a = 10;



    cout << a << "\n";
    //Test1(&a);
    //Test2(a);
    Test3(a);
    cout << a << "\n";
}
