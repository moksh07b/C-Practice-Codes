#include <iostream>
using namespace std;

class distance1
{
private:
    int km, m;

public:

    void input(){
        cout << "Input no of kilometers(s): ";
        cin >> km;
        cout << "Input no of meter(s): ";
        cin >> m;
    }

    void show() {
        cout << km << " km " << m << " m.\n";
    }

    distance1 diff(distance1 l){
        distance1 dif;

        dif.km = km - l.km;
        dif.m = m - l.m;

        while(dif.m < 0){
            dif.km -= 1;
            dif.m +=1000;
        }
        return dif;

    }
};

int main(){

    distance1 one, two, dif;

    cout << "Input distance 1: \n";
    one.input();
    cout << "Input distance 2: \n";
    two.input();

    cout << "distance 1 is: ";
    one.show();
    cout << "distance 2 is: ";
    two.show();

    dif = two.diff(one);
    cout << "Difference of distances is: ";
    dif.show();

}
