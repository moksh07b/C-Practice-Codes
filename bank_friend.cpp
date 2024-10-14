#include <iostream>
using namespace std;

class Customer;
class Bank;
void Loan(Bank b, Customer c);

class Bank
{
private:

    char Name[20], branch_city[20];
    float rate_of_interest;


public:

    void input(){
        cout << "Input Bank name: ";
        cin >> Name;
        cout << "Input branch city: ";
        cin >> branch_city;
        cout << "Input rate of interest per annum: ";
        cin >> rate_of_interest;
    }

    void friend Loan(Bank, Customer);

};


class Customer
{
private:

    char name[20];
    int acc_num, amount;
    float year;


public:

    void input(){
        cout << "Input Name: ";
        cin >> name;
        cout << "Input Account Number: ";
        cin >> acc_num;
        cout << "Input Amount: ";
        cin >> amount;
        cout << "Input Time Period(in year(s)): ";
        cin >> year;
        }

        void friend Loan(Bank, Customer);

};

void Loan(Bank b, Customer c){

    float total_amount, interest;

    total_amount = c.amount + ((c.amount * b.rate_of_interest * c.year) / 100);
    interest = (c.amount * b.rate_of_interest * c.year) / 100;

    cout << "After " << c.year << " year(s), interest on your amount " << c.amount << " is: " << interest << "\n";
    cout << "Total amount including interest to pay to bank is: " << total_amount;

}

int main () {

    Bank b;
    Customer c;

    cout << "Input Bank Details: \n";
    b.input();
    cout << "\nInput Customer Details: \n";
    c.input();

    Loan(b, c);


}
