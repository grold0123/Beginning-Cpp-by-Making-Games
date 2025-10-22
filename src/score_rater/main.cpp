/******************************
score_rater
demonstrates the if statement
******************************/
#include<iostream>
using namespace std;
int main () {
std::cout<< "Hello world" << std::endl;
if (true){
    cout << "This is always displayed.\n\n";
}
if (false){
    cout << "This is never displayed.\n\n";
}
int score = 500;
cout << "Your score is " << score << endl<<endl;
if (score=1000){
    cout << "Hey, you changed your score.\n";
    cout << "Your score became "<<score<<endl<<endl;
}
if (score >= 250){
    cout << "You scored 250 or more. Decent.\n\n";
}
if (score >= 500){
    cout << "You scored 500 or more. Nice.\n\n";
    if (score >= 1000){
        "You scored 1000 or more. Impressive!\n";
    }
}
score = 0;
if (not score){cout << "You suck";}
return 0;
}
