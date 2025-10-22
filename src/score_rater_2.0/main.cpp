/*****************************************
score_rater_2.0
demonstrates the else clause
*****************************************/
#include<iostream>
using namespace std;

int main () {
    int score = 0;        
    cout << "Enter your score: "; cin >> score; cout << endl;
    if (score >= 1000){
        cout << "You scored 1000 or more. Impressive\n\n";
    }
    else{
        cout << "You scored less than 1000.\n\n";
    }
    return 0;
}