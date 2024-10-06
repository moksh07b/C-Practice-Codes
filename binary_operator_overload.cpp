#include<iostream>

using namespace std;


class Height{

    int f,in;

public:

    void input(){
    cout << "\nInput Height Feet and Inches: ";
    cin >> f >> in;
    }

    void show(){
    cout << "\n" << f << " feet " << in << " inches\n";
    }

    void operator +(Height h){
    f = f + h.f;
    in = in + h.in;
    if(in >= 12){
        f += in / 12;
        in = in % 12;
    }
    }
};
int main(){

    Height b, t;
    cout << "\n Building \n";
    b.input();
    cout << "\n Tank \n";
    t.input();
    cout << "\n\n";

    b.show();
    t.show();

    b+t;

    b.show();

}

// factorial symbol
// power

// % Percentage
