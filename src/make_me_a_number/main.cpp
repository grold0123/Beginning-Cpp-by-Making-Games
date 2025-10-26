/**************************************************
make_me_a_number

**************************************************/
#include<slow_print.h>

int ask_number(int high,int low=1){
    int num;
    while(
        num > high || num < low
    ){
        slow_print("\n\nPlease enter a number (") ; cout << low ; slow_print(" - "); cout << high ; slow_print("): ");cin >> num;        
    }
    return num;
}



int main () {
    int number = ask_number(5);
    slow_print("\n\nThanks for entering: "); cout << number << "\n\n";

    number = ask_number(10,5);
    slow_print("\n\nThanks for entering: ") ; cout << number << "\n\n";
}