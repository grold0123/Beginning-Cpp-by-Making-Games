/**************************************************
friend_critter
run.py friend_critter
demonstrates friend functions and operator overloading
**************************************************/
#include<iostream>
#include<string>

using namespace std;
/**********************************/
class Critter{
    friend void Peek(const Critter&critter);
    friend ostream&operator<<(ostream&os,const Critter&critter);
public:
    Critter(const string&name="");
private:
    string name_of_critter;
};
/**********************************/
Critter::Critter(const string&name):
name_of_critter(name){}
/**********************************/
void Peek(const Critter&critter);
ostream&operator<<(ostream&os,const Critter&critter);
/**********************************/
int main(){
    Critter dog("Poochie");
    cout << "\n\nCalling Peek() to access crit's private data member, name: ";Peek(dog);
    cout << "\n\nSending dog object to cout with the << operator:\n"; cout << dog;
}
/**********************************/
void Peek(const Critter&critter){
    cout << critter.name_of_critter << endl;
}
ostream&operator<<(ostream&os,const Critter&critter){
    os << "Critter Object - ";
    os << "name_of_critter: " << critter.name_of_critter;
    return os;
}
/**********************************/