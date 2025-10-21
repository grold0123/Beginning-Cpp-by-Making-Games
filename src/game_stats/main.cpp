/*
game_stats
demonstrates declaring and initializing variables
*/
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

void display(
    int score,
    double distance,
    bool shield_up,
    short lives,
    short aliens_killed,
    double engine_temp
    ){    
        cout << "Current score: " << score << endl;
        cout << "Distance: " << distance << endl;
        cout << "Shield up: " << shield_up << endl;
        cout << "HP: " << lives << endl;
        cout << "Aliens killed: " << aliens_killed << endl;
        cout << "Engine temperature: " << engine_temp << endl << endl;
    }

void game(){

    // game stats
    int score = 0;
    double distance = 0;    
    bool shield_up = true;
    short lives = 3;
    short aliens_killed = 0;
    double engine_temp = 6572.89;

    // player input
    char play_again = 'y';
    string player_move;

    cout << "\n\n \t\tAlien Shooter \n\n";

    while (true){        

        //  break loop condition
        if (play_again == 'n'){
            cout << "Thanks for playing?" << endl;
            break;
        }
        

        //  player move prompt        
        cout << "Where do you wanna go? (left, right, stay, quit): "; cin >> player_move; cout << endl << endl;
        system("cls");
        if (player_move == "left"){
            cout << "You moved left,\n"
            << "The left path results in: \n" 
            <<"-   less score\n"
            <<"-   more distance\n"
            <<"-   consumed shield\n"
            <<"-   hp decreases a bit\n"
            <<"-   less aliens killed\n"
            <<"-   engine temperature increases more\n";
            score += 1;
            distance += 5;
            shield_up = false;
            lives -= 1;
            aliens_killed += 2;
            engine_temp += 100;                
        }

        else if (player_move == "right"){
            cout << "You moved right,\n"
            << "The right path results in: \n" 
            <<"-   more score\n"
            <<"-   less distance\n"
            <<"-   consumed shield\n"
            <<"-   hp decreases a lot\n"
            <<"-   more aliens killed\n"
            <<"-   engine temperature increases less\n";
            score += 4;
            distance += 2;
            shield_up = false;
            lives -= 3;
            aliens_killed += 5;
            engine_temp += 60;                  
        }
        
        else if (player_move == "stay"){
            cout << "You chose to stay put,\n"
            << "Not moving results in: \n" 
            <<"-   No score gained\n"
            <<"-   No distance distance gained\n"
            <<"-   restored shield\n"
            <<"-   Recover HP\n"
            <<"-   No aliens killed\n"
            <<"-   engine temperature increases a small amount\n";
            score += 1;
            distance += 0;
            shield_up = true;
            lives += 4;
            aliens_killed += 0;
            engine_temp += 25;          
        }

        else if (player_move == "quit"){
            cout << "You wanna quit, Bye!";
            break;
        }

        else {
          cout << "You were indecisive so no changes" << endl;
        } 

        cout << endl;

        //  display stats
        display(score,distance,shield_up,lives,aliens_killed,engine_temp);

        //  play again prompt
        if (lives <= 0){
            cout << "You died!!" << endl;
            cout << "Do you wanna play again? (y/n): "; cin >> play_again ; cout << endl;            
            system("cls");
            if (play_again == 'y'){                
                score = 0;
                distance = 0;    
                shield_up = true;
                lives = 3;
                aliens_killed = 0;
                engine_temp = 6572.89;
            }                
        }        
        else if (engine_temp >= 7000){
            cout << "Your engine explode!" << endl;
            cout << "Do you wanna play again? (y/n): "; cin >> play_again ; cout << endl;            
            system("cls");
            if (play_again == 'y'){                
                score = 0;
                distance = 0;    
                shield_up = true;
                lives = 3;
                aliens_killed = 0;
                engine_temp = 6572.89;
            }                
        }
        
    }

    //  display ending scores
    system("cls");
    cout << "\n\n End Game stats:" << endl << endl;
    display(score,distance,shield_up,lives,aliens_killed,engine_temp);
    cout << endl;
    cout << "\t\t Thanks for playing!!" << endl << endl;
}

int main () {
    system("cls");
    game();

}