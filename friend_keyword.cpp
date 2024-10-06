#include <iostream>
using namespace std;

class distance1;
class time1;

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

    weight total(weight c){

        weight b;

        b.kg = kg + c.kg;
        b.gm = gm + c.gm;


        while(b.gm >= 1000) {
                b.kg += 1;
                b.gm -= 1000;
        }

        return b;

    }

     void friend print(weight w, distance1 d, time1 t);


};


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

    distance1 diff(distance1 l){
        distance1 dif;

        if(km > l.km){
        dif.km = km - l.km;
        dif.m = m - l.m;
        cout << "1st route is greater.\n";
    }
    else if(l.km > km){
        dif.km = l.km - km;
        dif.m = l.m - m;
        cout << "2nd route is greater.\n";
    }
    else{
        if(l.m > m){
                dif.km = l.km - km;
                dif.m = l.m - m;
                cout << "2nd route is greater.\n";
        }
        else{
            dif.km = km - l.km;
        dif.m = m - l.m;
        cout << "1st route is greater.\n";
        }
    }

        while(dif.m < 0){
            dif.km -= 1;
            dif.m +=1000;
        }
        return dif;

    }

    void friend print(weight w, distance1 d, time1 t);

};

class time1{

    int h = 0, s = 0;
    float m;

    void friend print(weight w, distance1 d, time1 t);

};

void print(weight w, distance1 d, time1 t){
    float speed;

    if(w.kg > 100){
        speed = 2;
    }
    else if(w.kg >125){
        speed = 1.75;
    }
    else if(w.kg > 150){
        speed = 1.5;
    }
    else if(w.kg > 175){
        speed = 1.25;
    }
    else if(w.kg > 200){
        speed = 1;
    }
    else if(w.kg > 225){
        speed = 0.75;
    }
    else if(w.kg > 250){
        speed = 0.5;
    }
    else {
        speed = 0.25;
    }

    t.m = (d.km / 2) + (d.m / 2);

    while (t.m > 60){
        t.h += 1;
        t.m -= 60;
    }

    t.m -= int(t.m);

    t.s = t.m * 60;


    cout << "You will save distance by "<< d.km << " km " << d.m << " m and time by " << t.h << " hrs " << t.m << " min " << t.s << " secs.";


}


int main(){

    distance1 one, two, dif;

    cout << "Input distance 1: \n";
    one.input();
    cout << "Input distance 2: \n";
    two.input();

    weight mobile, charger, bag;

    cout << "\nInput weight of 1st thing: \n";
    mobile.input();
    cout << "\nInput weight of 2nd thing: \n";
    charger.input();

    bag = mobile.total(charger);

    dif = one.diff(two);

    time1 t;

    print(bag, dif, t);

}
