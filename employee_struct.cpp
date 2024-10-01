#include <iostream>

using namespace std;

struct Employee{
    int id;
    char name[10];
    float salary;
};


int main () {

    int n;

    cout << "Input Number of students: ";
    cin >> n;

    Employee e[n];

    for(int i = 0; i < n; i++){
        cout << "Input id: ";
        cin >> e[i].id;
        cout << "Input name: ";
        cin >> e[i].name;
        cout << "Input salary: ";
        cin >> e[i].salary;
    }

    for(int i = 0; i < n; i++){
        cout << e[i].id << "\t" << e[i].name << "\t" << e[i].salary << "\n";
        }


}
