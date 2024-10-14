#include <iostream>
using namespace std;

class cost
{
private:
    int rp, ps;

public:

    void input(){
        cout << "Input Rupees: ";
        cin >> rp;
        cout << "Input Paise: ";
        cin >> ps;
    }

    void show() {
        cout << rp << " rupees " << ps << " paise\n";
    }

    cost sum(cost l, cost r){
        cost total;

        total.rp = rp + l.rp + r.rp ;
        total.ps = ps + l.ps + r.ps;

        while(total.ps >= 100){
            total.rp += 1;
            total.ps -= 100;
        }


        return total;

    }
};

int main(){

    cost jeans, shirt, total, shoes;

    cout << "Cost of jeans: \n";
    jeans.input();
    cout << "Cost of shirt: \n";
    shirt.input();
    cout << "Cost of shoes: \n";
    shoes.input();

    cout << "Cost of jeans is: ";
    jeans.show();
    cout << "Cost of shirt is: ";
    shirt.show();
    cout << "Cost of shoes is: ";
    shoes.show();

    total = shirt.sum(jeans, shoes);
    cout << "\n\nTotal cost is: ";
    total.show();

}
