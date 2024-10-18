#include <iostream>

using namespace std;

class Employee {

private:
    int id;
    char name[10];
    float salary, year;

public:
    void input(){
    cout << "Input Name: ";
    cin >> name;
    cout << "Input ID: ";
    cin >> id;
    cout << "Input Salary: ";
    cin >> salary;
    cout << "Year of Joining: ";
    cin >> year;
    }

    void display() {
    cout << "\n" << name << "\t" << id << "\t" << salary;
    }

    void bonus() {
        year = 2022 - year;
        if(year > 10){
            salary += (salary * .10);
        }
        else if (year < 1){
            salary = salary;
        }
        else{
            salary += (salary * .05);
        }


    }

    float grossSalary() {

        bonus();

        return (salary + (salary * (float(10 + 15 + 20) / 100)));

    }

};

int main()
{

    int n;

    cout << "Input number of employee: ";
    cin >> n;

    Employee e[n];
    float gross[n];

    for (int i = 0; i < n; i++){
        e[i].input();
    }
    for (int i = 0; i < n; i++){
        e[i].display();
        gross[i] = e[i].grossSalary();
        if(gross[i] > 50000){
        cout << "\nGross Salary of Employee " << i+1 << " is: " << gross[i];
        }
    }




}


// Student class (Grade)

//Book (aurthor tilte, order copies, pages ,discout ,(1000 > 10%) (2000 > 20%) (1500 > 15%)(500 > 5%)

//Worker (name , rate ,wage, number of days)
