/**************************************************
private_critter
run.py private_critter
demonstrates setting member access levels
**************************************************/
#include<iostream>
using namespace std;

class Critter{
    public:
    Critter(int hunger=0);
    int get_hunger() const;
    void set_hunger(int hunger);
    private:
    int hunger;
};
Critter::Critter(int hunger_argument):hunger(hunger_argument){
    cout << "\n\nA new critter has been born!";
}
int Critter::get_hunger() const{
    return hunger;
}
void Critter::set_hunger(int hunger){
    if(hunger<0){
        cout << "\n\nYou can't set a critter's hunger to a negative number.";
    }
    else{
        this->hunger = hunger;
    }
}
int main(){
    Critter dog(5);
    cout << "\n\nDisplaying hunger attributes using get_hunger method: " << dog.get_hunger();
    cout << "\n\nCalling set_hunger() with -1."; dog.set_hunger(-1);
    cout << "\n\nDisplaying new hunger attributes using get_hunger method: " << dog.get_hunger();
    cout << "\n\nCalling set_hunger() with 9."; dog.set_hunger(9);
    cout << "\n\nDisplaying new hunger attributes using get_hunger method: " << dog.get_hunger();
}