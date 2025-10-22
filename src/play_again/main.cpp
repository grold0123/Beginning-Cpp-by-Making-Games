/**************************************************
play_again

**************************************************/
#include<iostream>
#include<cstdlib>
using namespace std;

int main () {

    //choice variable declaration
    char again = 'y';

    //a loop that keeps asking if you want to play again
    while (true){

        //break condition 
        if (again == 'n'){break;}                

        cout << "You played an amazing game.\n";

        //prompt
        cout << "\nDo you want to play again? (y/n): " ; cin >> again ; cout << endl ;
        system("cls");

        //wrong input
        if ((again != 'y') and (again != 'n')){
            cout << "You entered a wrong answer, welp lets play again, anyway\n\n";
        }

        //play again prompt
        else if (again == 'y'){
            cout << "You played again, let's go\n\n";
        }
        

    }

    //break loop message
    cout << "\nOkay, Bye!";

}