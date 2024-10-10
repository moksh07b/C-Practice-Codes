#include <iostream>
using namespace std;

int main () {
    int one = 0, two = 0;
    char p1, p2, y;

    do {
        cout << "Press 'r' for Rock, 'p' for Paper, 's' for Scissors\n";
        cout << "Player 1: ";
        cin >> p1;
        cout << "Player 2: ";
        cin >> p2;
        if (p1 == 'r' && p2 == 's'){
            cout << "Player 1 wins.\n";
            one++;
        }
        else if (p1 == 's' && p2 == 'p'){
            cout << "Player 1 wins.\n";
            one++;
        }
        else if (p1 == 'p' && p2 == 'r'){
            cout << "Player 1 wins.\n";
            one++;
        }
        else if (p1 == 's' && p2 == 'r'){
            cout << "Player 2 wins.\n";
            two++;
        }
        else if (p1 == 'p' && p2 == 's'){
            cout << "Player 2 wins.\n";
            two++;
        }
        else if (p1 == 'r' && p2 == 'p'){
            cout << "Player 2 wins.\n";
            two++;
        }
        else {
            cout << "Draw.\n";
        }
        cout << "Do you want to play again y/n: ";
        cin >> y;
    }while (y == 'y');
    cout << "Player 1 scores: " << one << "\n";
    cout << "Player 2 scores: " << two << "\n";

    if (one > two){
        cout << "Player 1 wins.";
    }
    else if (two > one) {
        cout << "Player 2 wins.";
    }
    else {
        cout << "Draw.";
    }
}
