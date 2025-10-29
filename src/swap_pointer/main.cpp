/**************************************************
swap_pointer
demonstrates passing constant pointers to alter
argument variables
**************************************************/
#include<iostream>

using namespace std;
using constant_pointer_to_an_int = int*const;
using int_pointer_to_a_constant = const int*;


void bad_swap(int x, int y);
void good_swap(constant_pointer_to_an_int x, constant_pointer_to_an_int y);

int main(){
    int my_score = 150;
    int your_score = 1000;

    cout << "\n\nOriginal values:\n";
    cout << "\n\tmy_score: " << my_score;
    cout << "\n\tyour_score: " << your_score;

    cout << "\n\nCalling bad_swap()\n";bad_swap(my_score,your_score);
    cout << "\n\tmy_score: " << my_score;
    cout << "\n\tyour_score: " << your_score;

    cout << "\n\nCalling good_swap()\n";good_swap(&my_score,&your_score);
    cout << "\n\tmy_score: " << my_score;
    cout << "\n\tyour_score: " << your_score;

    cout << "\n\n";

}

void bad_swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;
}
void good_swap(constant_pointer_to_an_int x, constant_pointer_to_an_int y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
