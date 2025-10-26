/**************************************************
yes_no
demonstrates return values and parameters
**************************************************/
#include<slow_print.h>


char ask_yes_no_1();
char ask_yes_no_2(string question);

int main () {
system("cls");
char answer_1 = ask_yes_no_1();
slow_print("Thanks for answering: "); cout << answer_1 << endl << endl;
char answer_2 = ask_yes_no_2("Do you wish to save your game?");
slow_print("Thanks for answering: "); cout << answer_2 << endl << endl;




}

char ask_yes_no_1(){
    char response;
    while (true){
        slow_print("Please enter 'y' or 'n': "); cin >> response; cout << endl << endl;
        if (response == 'y' or response == 'n') return response;
    }    
}

char ask_yes_no_2(string question){
    char response;
    while (true){
        slow_print(question); slow_print(" (y/n): ") ; cin >> response; cout << endl << endl;
        if (response == 'y' or response == 'n') return response;
    }    
}
