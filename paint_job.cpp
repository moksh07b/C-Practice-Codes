#include <iostream>

using namespace std;

void PaintJob(float sqrfeet, float paintpr)
{
    int charge;

    if(sqrfeet >= 1500){
        charge = 23;
    }
    else charge = 25;

    cout << "\n\n\n";
    cout << "Number of Gallons of paint required is: " << sqrfeet / 150;
    cout << "\nHours of labor required is: " << (sqrfeet/150) * float(9);
    cout << "\nCost of Paint: " << (sqrfeet/150) * paintpr ;
    cout << "\nCost of labor: " << (sqrfeet/150) * 9 * charge ;
    cout << "\nTotal Cost: " << (sqrfeet/150) * ((9 * charge) + paintpr)  ;
}



int main (){

    int n, p;

    cout << "Cost of Paint per Gallon: ";
    cin >> p;
    cout << "Area to be painted (in sqr.feet): ";
    cin >> n;

    PaintJob(n,p);






}
