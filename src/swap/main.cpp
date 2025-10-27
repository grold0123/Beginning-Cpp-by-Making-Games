/**************************************************************
swap
demonstrates passing references to alter argument variables
**************************************************************/
#include<iostream>
using namespace std;

void bad_swap(int x, int y);
void good_swap(int&x,int&y);

int main () {
    int my_score = 150;
    int your_score = 1000;

    cout << "Original values\n";
    cout << "\tmy_score: " << my_score << "\n";
    cout << "\tyou_score: " << your_score << "\n\n";

    cout << "Calling bad_swap()\n";
    bad_swap(my_score,your_score);
    cout << "\tmy_score: " << my_score << endl;
    cout << "\tyour_score: " << your_score << endl << endl;

    cout << "Calling good_swap()\n";
    good_swap(my_score,your_score);
    cout << "\tmy_score: " << my_score << endl;
    cout << "\tyour_score: " << your_score << endl << endl;

}

//function definitions

void bad_swap(int x, int y){
    int temp = x;
    x = y ; 
    y = temp;
}

void good_swap(int&x,int&y){
    int temp = x;
    x = y;
    y = temp;
}

