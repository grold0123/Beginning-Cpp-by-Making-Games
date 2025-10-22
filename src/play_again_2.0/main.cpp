/**************************************************
play_again_2.0
demonstrates do loop
**************************************************/
#include<iostream>
#include<cstdlib>
using namespace std;

int main () {
    system("cls");
    //choice variable declaration
    char again = 'y';

    //do statement
    do{
        if (again == 'n'){
            cout << "Thanks for playing!\n";
            break;}
        else if (again == 'y'){
            cout << "\n**You played an amazing game**\n";
        }
        else if (again != 'y'){
            cout << "\n**You entered an invalid response**\n";
        }
        
        cout << "\nDo you want to play again? (y/n): ";
        cin >> again;
        system("cls");
    }while(true);

    //break loop statement
    cout << "Okay, bye!";

}