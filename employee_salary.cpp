#include <iostream>

using namespace std;

int main() {
    int n, i, emin = 0, m = 0, j = 0, emore=0;

    cout << "How many Employee do you wanna enter Salary of?: ";
    cin >> n;
    double e[n];

    for (i = 0; i < n; i++){
        cout << "Enter salary of employee "<< i + 1 << ": ";
        cin >> e[i];
    }
    int emax = e[0];

    for (i = 0 ; i < n; i++) {
            if(emax < e[i]){
                emax = e[i];
                m = i+1;
            }
            if(emin > e[i]){
                emin = e[i];
                j = i+1;
            }
            if((int(e[i]) % 2) != 0){
                cout << "Employee having odd salary : " << i+1 << ": " << e[i] << "\n";
            }
            if(e[i] > 20000){
                emore++;
            }
    }
    cout << "Max salary of employee is of employee " << m << " which is " << emax << "\n";
    cout << "Min salary of employee is of employee " << j << " which is " << emin << "\n";
    if (emore == 0){
        cout << "No employee have salary more than 20000";
    }
    else {
        cout << emore << " employee have salary more than 20000";
    }
}

// search in array
