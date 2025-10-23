/**************************************************
counter
demonstrates for loops
**************************************************/
#include<iostream>
#include<cstdlib>
using namespace std;


void count(char i,int limit){
    
    if (i == 'f'){
        cout << "\n\nCounting numbers up to " << limit << endl <<endl;
        for (int number = 1 ; number <= limit ; ++number){
            cout << '\t' << number << endl;
        }
    }
    else if (i == 'b'){
        cout << "\n\nCounting numbers from " << limit << " to one" << endl <<endl;
        for (int number = limit ; number >= 1 ; --number){
            cout << '\t' << number << endl;
        }
    }
    else {
        cout << "invalid choice\n\n";
    }
}


int main () {
    system("cls");
    char count_direction;    
    int limit;
    while (true){
        cout << "\n\nChoose whether to count from one or until one (f:from | b:until): " ; cin >> count_direction ; cout << endl;
        cout << "Enter the count limit: " ; cin >> limit ; 
        system("cls");
        count(count_direction,limit);
    }
}