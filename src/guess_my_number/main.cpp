/**************************************************
guess_my_number
**************************************************/
#include<iostream>
#include<cstdlib>
#include<vector>
#include<csignal>
#include<typeinfo>

using namespace std;


void handle_sigint(int signal){
    cout << "\nClosing game\n" << endl;
    exit(0);
}

void response(int guess,int secret_number){
if (guess > secret_number){
            cout << "Too high!\n\n";
}
else if (guess < secret_number){
    cout << "Too low!\n\n";
}
else {
    cout << "\nThat's it! You got it!\n";
}

}

int main () {

    system("cls");

    //applying game loop
    signal(SIGINT,handle_sigint);

    srand(static_cast<unsigned int>(time(0)));

    vector<int> guesses;
    int secret_number = rand() % 100 + 1;
    int tries = 0;
    int limit = 10;
    int guess;

    cout << "\n\n\tWelcome to Guess My Number\n\n";

    //loop
    while (true){

        if (tries > limit){
            cout << "Too many attempts, Bye!\n";
            break;}        
        cout << "Enter a guess: "; cin >> guess;
        system("cls");
        if (!cin.fail()){
            ++tries;        
            guesses.push_back(guess);
            response(guess,secret_number);
        }
        else {            
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Invalid input!\n\n";        
        }                        
        if (guess == secret_number)  {
            cout << "Thanks for playing\n\n";
            break;
        }
    
    }

    //display results  

    cout << "Secret number: " << secret_number << endl;
    cout << "Number of Tries: " << tries << endl;
    cout << "Your guesses: \n";
    for (int n : guesses ){
        cout << " " << n << ",";
    }
    


}