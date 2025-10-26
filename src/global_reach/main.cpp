/**************************************************
global_reach
demonstrates global variables
**************************************************/
#include<slow_print.h>
int glob = 10 ;

void access_global();
void hide_global();
void change_global();



int main () {
cout << "\n\nIn main() glob is: " << glob << "\n\n";
access_global();

hide_global();
cout << "\n\nIn main() glob is: " << glob << "\n\n";

change_global();
cout << "\n\nIn main() glob is: " << glob << "\n\n";
}

void access_global(){
    cout << "\n\nIn access_global() glob is: " << glob << "\n\n";
}
void hide_global(){
    int glob = 0;
    cout << "\n\nIn hide_global() glob is: " << glob << "\n\n";
}
void change_global(){
    glob = -10;
    cout << "\n\nIn change_global() glob is: " << glob << "\n\n";
}



