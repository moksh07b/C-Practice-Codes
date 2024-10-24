// Manager , Sales, account maker


#include <iostream>
#include <string.h>
using namespace std;

class Employee{

    char name[20], Department[10];
    int salary, id;
    static com_name[25];

public:
    virtual void Conditions() = 0;
    void input(){
        cout << "\nInput Name: ";
        cin.get(name, 20);
        cin.get();
        cout << "\nInput Department: ";
        cin.get(Department, 15);
        cout << "\nInput ID : ";
        cin >> id;
        cout << "\nInput Salary : ";
        cin >> salary;

    }
};

class Manager : public Employee {

    int amount;

public:


    void Conditions(){

        cout << "Input average amount of funds raised in a month: ";
        cin >> amount;

        if(amount < 500000){
            cout << "Job Terminated.";
        }
        else {
            cout << "Keep Up the good Job.\n";
        }
    }

};

class Sales : public Employee {

    int amount;

public:

    void Conditions(){

        cout << "Input average amount of items sold in a month: ";
        cin >> amount;

        if(amount < 25){
            cout << "Job Terminated.";
        }
        else {
            cout << "Keep Up the good Job.\n";
        }
    }

};

class account_manager : public Employee {

    int amount;

public:

    void Conditions(){

        cout << "Input average amount of Accounts opened in a month: ";
        cin >> amount;

        if(amount < 15){
            cout << "Job Terminated.";
        }
        else {
            cout << "Keep Up the good Job.\n";
        }
    }

};

int main(){


    Manager m;
    Sales s;
    account_manager acc;

    acc.input();
    acc.Conditions();
}
