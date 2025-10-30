/**************************************************
critter_caretaker
run.py critter_caretaker

**************************************************/
#include<iostream>
#include<cstdlib>
using namespace std;


constexpr char QUIT = 'x';
constexpr char LISTEN = '1';
constexpr char FEED = '2';
constexpr char PLAY = '3';
constexpr char CHECK = '4';

class Critter{
private:
    int hunger,boredom;
    void pass_time();
public:
    int get_mood();
    void talk();
    void eat();
    void play();
    Critter(int hunger_arg,int boredom_arg);
};
int Critter::get_mood(){cout << "Your mama";return 1;};
void Critter::talk(){cout << "Your papa";};
void Critter::eat(){cout << "Your bro";};
void Critter::play(){cout << "Your sis";};
Critter::Critter(int hunger_arg,int boredom_arg)
:
hunger(hunger_arg),boredom(boredom_arg)
{};

void game(){
    char pet_interaction;
    Critter dog(10,10);
    while(true){
        
        cout << "\n\nChoices: ";
        cout << "\n\tPress x: QUIT";
        cout << "\n\tPress 1: LISTEN";
        cout << "\n\tPress 2: FEED";
        cout << "\n\tPress 3: PLAY";
        cout << "\n\tPress 4: CHECK";
        cout << "\n\nWhat do you want to do with you critter: \n"; cin >> pet_interaction ;
        system("cls");
        if (pet_interaction == QUIT) break;
        else if (pet_interaction != QUIT)            
            switch(pet_interaction){            
                case LISTEN: dog.talk();break;
                case FEED: dog.eat();break;
                case PLAY: dog.play();break;
                case CHECK: dog.get_mood();break;
                default: cout << "\n\nInvalid answer! again";
            }//switch statement                        
    }//while loop            
};  

int main(){
    system("cls");
    cout << "\n\n\t**Welcome to the Critter Taker**\n\n";
    game();
    cout << "\n\n\t**Good Bye!!**\n\n";
}