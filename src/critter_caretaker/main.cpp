/**************************************************
critter_caretaker
run.py critter_caretaker

**************************************************/
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;


constexpr char QUIT = 'x';
constexpr char LISTEN = '1';
constexpr char FEED = '2';
constexpr char PLAY = '3';
constexpr char CHECK = '4';

//[CLASS DECLARATION]
/*
private:
    int hunger,boredom;
    void pass_time(int time=1);
public:
    int get_mood()const;
    void talk();
    void eat(int food = 4);
    void play(int fun = 4);
    Critter(int hunger_arg,int boredom_arg);
*/
class Critter{
private:
    int hunger,boredom;
    void pass_time(int time=1);
public:
    int get_mood()const;
    void talk();
    void eat(int food = 4);
    void play(int fun = 4);
    Critter(int hunger_arg,int boredom_arg);
};

//return (this->hunger + this->boredom);
inline int Critter::get_mood() const{    
    return (this->hunger + this->boredom);
};

/*
cout << "I'm a critter and I feel ";
int mood = this->get_mood();    
if (mood > 15){
    cout << "mad.\n";
}
else if (mood > 10) {
    cout << "frustrated.\n";
}
else if (mood > 5) {
    cout << "frustrated.\n";
}
else {
    cout << "happy.\n";
}
this->pass_time();
*/
void Critter::talk(){
    cout << "I'm a critter and I feel ";
    int mood = this->get_mood();    
    if (mood > 15){
        cout << "mad.\n";
    }
    else if (mood > 10) {
        cout << "frustrated.\n";
    }
    else if (mood > 5) {
        cout << "frustrated.\n";
    }
    else {
        cout << "happy.\n";
    }
    this->pass_time();
};

/*
cout << "Brruppp.\n";
this->hunger -= food;
if (this->hunger < 0) this->hunger = 0;
this->pass_time();
*/
void Critter::eat(int food){
    cout << "Brruppp.\n";
    this->hunger -= food;
    if (this->hunger < 0) this->hunger = 0;
    this->pass_time();
};

/*
cout << "Wheee!\n";
this->boredom -= fun;
if (this->boredom < 0) this->boredom = 0;
this->pass_time();
*/
void Critter::play(int fun){
    cout << "Wheee!\n";
    this->boredom -= fun;
    if (this->boredom < 0) this->boredom = 0;
    this->pass_time();
};

/*
:hunger(hunger_arg),boredom(boredom_arg)
{};
*/
Critter::Critter(int hunger_arg,int boredom_arg)
:
hunger(hunger_arg),boredom(boredom_arg)
{};


/*
this->hunger += time_arg; 
this->boredom += time_arg;
*/
void Critter::pass_time(int time_arg){
    this->hunger += time_arg; 
    this->boredom += time_arg;
};

void game(){
    char pet_interaction;
    Critter dog(1,2);
    while(true){
        
        cout << "\n\nChoices: ";
        cout << "\n\tPress x: QUIT";
        cout << "\n\tPress 1: LISTEN";
        cout << "\n\tPress 2: FEED";
        cout << "\n\tPress 3: PLAY";        
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