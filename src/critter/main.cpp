/**************************************************
critter
demonstrates creating a new type
**************************************************/
#include<iostream>
#include<string>
using namespace std;
class Critter{
    public:
    void greet();
    Critter(
        const int&initial_hunger_value,
        const string&critter_name
    ):  hunger(initial_hunger_value),
        name(critter_name)
    {};
    private:
    int hunger;
    string name;
};
void Critter::greet(){
    cout << "\n\nHi my name is " << this->name <<  ". I'm a critter. My hunger level is " << this->hunger << '.' << endl;
};
int main(){
    Critter dog(9,"Michael");
    Critter cat(3,"Jordan");

    dog.greet();
    cat.greet();

    cout << "\n\n";
}