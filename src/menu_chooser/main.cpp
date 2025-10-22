/***********************************************
menu_chooser
demonstrates the switch statement
***********************************************/

#include<iostream>
using namespace std;

void display_choices(){
    cout << "Difficulty Levels\n\n";
    cout << "1 - Easy\n";
    cout << "2 - Normal\n";
    cout << "3 - Hard\n\n";
}

void choose(int choice){
    switch (choice){
        case 1:
            cout << "You picked Easy";break;
        case 2:
            cout << "You picked Normal";break;
        case 3:
            cout << "You picked Hard";break;
        default:
            cout << "You made an invalid choice.";break;
    cout << endl;
    }
}


int main () {
display_choices();
int choice = 0;
cout << "Choose your difficulty: "; cin >> choice; cout << endl << endl;
choose(choice);
}