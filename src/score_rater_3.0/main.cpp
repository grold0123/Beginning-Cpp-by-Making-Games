/******************
score_rater_3.0
demonstrate if ,else-if ,else suite
******************/
#include<iostream>
using namespace std;
int main () {

int score = 0;

//prompt 
cout << "Enter your score: "; cin >> score ; cout << endl << endl;

//conditions
if (score >= 1000){
cout << "Wow\n\n";
}
else if (score >= 500){
cout << "Yeah\n\n";
}
else if (score >= 250){
cout << "Ok\n\n";
}
else if (score <=249){
cout << "you suck\n\n";
}

}