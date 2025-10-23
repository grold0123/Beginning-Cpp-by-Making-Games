/**************************************************
die_roller
demonstrates generating random numbers
**************************************************/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


void throw_dice(){
srand(static_cast<unsigned int>(time(0)));
int random_number = rand();
int die = (random_number % 6) + 1;
cout << "\n\nYou rolled a " << die << endl;
}
int main () {

    /*
    1.  setup 
        -   clear display
        -   declare an initial value to response as y

    2.  loop
        -   call function throw_dice which randomly gets an int number
    
    3.  check if player wants to play again
        -   display prompt and get user input
    
    4.  check if player wants to quit

    5.  close game
    */
    system("cls");    
    char again = 'y';
    while (true){
        if (again == 'n'){break;}        
        throw_dice();
        cout << "\n\nPlay again? (y/n): "; cin >> again; cout << endl << endl;
        system("cls");
        if (again != 'y' and again != 'n'){
            cout << "What was that? anyway lets throw again.";
        }
    }
    cout << "Thanks for playing\n\n";
}