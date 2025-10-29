/**************************************************
pointing
demonstrates pointers
**************************************************/
#include<iostream>
#include<string>

using namespace std;
using int_pointer = int*;


int main(){
    int_pointer test;
    int_pointer score_pointer = 0;

    cout << "\nAssigning &score to score_pointer"; int score = 1000;score_pointer = &score;
    cout << "\n\t&score is:"<<"\t\t\t\t\t"<< &score; 
    cout << "\n\tscore_pointer is:"<<"\t\t\t\t"<< score_pointer; 
    cout << "\n\tscore is:"<<"\t\t\t\t\t" << score;
    cout << "\n\tdereferencing score_pointer (*score_pointer):"<<"\t"<< *score_pointer;

    cout << "\n\nAdding 500 to score";score += 500;
    cout << "\n\tscore is:"<<"\t\t\t\t\t" << score ;
    cout << "\n\tdereferencing score_pointer (*score_pointer):"<<"\t" << *score_pointer;

    cout << "\n\nAssigning &new_score to score_pointer"; int new_score = 5000;score_pointer = &new_score;
    cout << "\n\t&new_score is:"<<"\t\t\t\t\t"<< &new_score; 
    cout << "\n\tscore_pointer is:"<<"\t\t\t\t"<< score_pointer; 
    cout << "\n\tnew_score is:"<<"\t\t\t\t\t" << new_score;
    cout << "\n\tdereferencing score_pointer (*score_pointer):"<<"\t"<< *score_pointer;

    cout << "\n\n";
}