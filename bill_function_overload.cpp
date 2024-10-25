#include <iostream>

using namespace std;

class Bill{

    double a, b, c, d, sum = 0;

public:

    void bill1(int unit, double cost){       //Electricity
            a = unit * cost;
            cout << "\nElectricity Bill: " << a;
    }
    void bill1(int no, int cost){           // gas
            b = no * cost;
            cout << "\nGas Bill: " << b;
    }
    void bill1(int cost){                   //recharge
            c = cost;
            cout << "\nRecharge Bill: " << c;
    }
    void bill1(double cost){                 // water
            d = cost;
            cout << "\nWater Bill: " << d;
    }
    void sum1(){
        sum += a + b + c + d;
        cout << "\nTotal Bill: " << sum ;
    }
};


int main(){

    Bill b;

    b.bill1(200, 8.2);
    b.bill1(3,324);
    b.bill1(265);
    b.bill1(650.75);

    b.sum1();


}
