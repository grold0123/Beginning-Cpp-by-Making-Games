/**************************************************
triple_program
demonstrates function overloading
**************************************************/
#include<slow_print.h>

int triple(int number);
string triple(string text);


int main () {
slow_print("Tripling 5: "); cout << triple(5) << "\n\n";
slow_print("Tripling 'game': "); cout << triple("game");
}

int triple(int number){
    return (number * 3);
}

string triple(string text){
    return (text+text+text);
}