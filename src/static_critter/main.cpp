/**************************************************
static_critter
run.py static_critter
demonstrates static member variables and functions
**************************************************/
#include<iostream>
using namespace std;

class Critter{
public:
    static int number_of_critters;
    static int get_number_of_critters(); 
    Critter(int hunger_argument=0);
private:
    int hunger;
};
int Critter::number_of_critters = 0;
Critter::Critter(int hunger_argument):hunger(hunger_argument){
    cout << "\n\nA critter has been born!" ; ++this->number_of_critters;
};
int Critter::get_number_of_critters(){
    return number_of_critters;
}
int main(){

    cout << "\n\nThe total number of critters is: ";cout << Critter::number_of_critters;
    Critter dog,cat,rat;
    cout << "\n\nThe total number of critters is: ";cout << Critter::get_number_of_critters();
    
}