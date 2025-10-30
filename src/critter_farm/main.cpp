/**************************************************
critter_farm
run.py critter_farm
demonstrates object containment
**************************************************/
#include<iostream>
#include<string>
#include<vector>

using namespace std;



class Critter{
    
public:
    Critter(const string&name_arg = ""):name(name_arg){        
        cout << "\nHi, my name is " << this->name << endl;
    }
    inline string get_name() const{
        return this->name;
    }
private:
    string name;
};

class Farm{
public:
    Farm(int spaces = 1){
        this->critters.reserve(spaces);
        cout << "\nThis farm can hold up to " << spaces << " Critters\n";
    }
    void add(const Critter&critter){
        cout << "\nAdding a critter to the farm\n";
        this->critters.push_back(critter);
    }
    void roll_call()const{
        for (
            vector<Critter>::const_iterator iterator = this->critters.begin() ;
            iterator != this->critters.end();
            ++iterator
        ){
            cout << iterator->get_name() << " here.\n";
        }
    }
private:
    vector<Critter> critters;
};



int main(){
    Critter cat("Poochie");    
    Farm farm(3);

    farm.add(Critter("Moe"));
    farm.add(Critter("Larry"));
    farm.add(Critter("Homer"));

    cout << "\nCalling Roll....\n";
    farm.roll_call();
}