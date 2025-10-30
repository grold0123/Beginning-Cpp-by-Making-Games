/**************************************************
array_passer
demonstrates relationship between pointers and arrays
*************************************************/
#include<iostream>
using namespace std;

using constant_int_pointer = int*const;
using int_constant = const int;
using constant_constant_int_pointer = const constant_int_pointer;

void increase(constant_int_pointer array,int_constant NUM_ELEMENTS);
void display(constant_constant_int_pointer array, int_constant NUM_ELEMENTS);

int main(){

    int_constant NUM_SCORE_COUNT = 3;
    int high_scores[NUM_SCORE_COUNT] = {5000,3500,2700};
    cout << "\n\nThe first element in the array is: " << *high_scores;
    cout << "\n\nThe second element in the array is: " << *(high_scores+1);
    cout << "\n\nThe third element in the array is: " << *(high_scores+2);

    cout << "\n\nIncreasing scores by passing array as a constant pointer."; increase(high_scores,NUM_SCORE_COUNT);
    cout << "\n\nDisplaying scores by passing array as a constant pointer to a constant."; display(high_scores,NUM_SCORE_COUNT);


    cout << "\n\n";
}

void increase(constant_int_pointer array,int_constant NUM_ELEMENTS){
    for (int index=0 ; index < NUM_ELEMENTS ; ++index){
        array[index] += 500;
    }
}
void display(constant_constant_int_pointer array, int_constant NUM_ELEMENTS){
    for (int index=0 ; index < NUM_ELEMENTS ; ++index){
        cout << endl << array[index] << endl;
    }
}