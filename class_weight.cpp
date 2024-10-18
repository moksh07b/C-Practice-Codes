#include <iostream>
using namespace std;

class weight
{
private:
    int kg, gm;

public:

    void input(){
        cout << "Input no of kilogram(s): ";
        cin >> kg;
        cout << "Input no of gram(s): ";
        cin >> gm;
    }

    void show() {
        cout << kg << " kg " << gm << " gm.\n";
    }

    weight total(weight m, weight c){

        weight b;

        b.kg = kg + m.kg + c.kg;
        b.gm = gm + m.gm + c.gm;


        while(b.gm >= 1000) {
                b.kg += 1;
                b.gm -= 1000;
        }

        return b;

    }

};


int main () {

    weight mobile, charger, bag, laptop;

    cout << "\nInput weight of mobile: \n";
    mobile.input();
    cout << "\nInput weight of laptop: \n";
    laptop.input();
    cout << "\nInput weight of charger: \n";
    charger.input();
    cout << "\nWeight of mobile is: ";
    mobile.show();
    cout << "\nWeight of charger is: ";
    charger.show();
    cout << "\nWeight of laptop is: ";
    laptop.show();

    bag = laptop.total(mobile, charger);

    cout << "\nWeight of bag is: ";
    bag.show();


}
