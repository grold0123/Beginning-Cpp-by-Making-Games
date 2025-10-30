/**************************************************
constructor_critter
run.py constructor_critter
demonstrates constructors
**************************************************/
#include<iostream>
using namespace std;

class Critter{
public:
    Critter(int hunger,string name);
    void greet();
private:
    int hunger;
    string name;
};
Critter::Critter(int hunger_argument=0,string name_argument="gab"):hunger(hunger_argument),name(name_argument){
    cout << "\n\nA new critter has been born!" << endl;    
    cout << "\n\tName: " << this->name;
    cout << "\n\tHunger: " << this->hunger;
};
void Critter::greet(){
    cout << "\n\nHi. My name is " << this->name << ". My hunger level is " << this->hunger << '.';
};

int main(){
    Critter dog(7,"mark");
    dog.greet();
}