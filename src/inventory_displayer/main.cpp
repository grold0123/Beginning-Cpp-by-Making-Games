/**************************************************
inventory_displayer
demonstrates constant references
**************************************************/
#include<iostream>
#include<string>
#include<vector>
using namespace std;

//function declaration
void display(const vector<string>&inventory);

//main function
int main(){

    //vectory type declaration
    vector<string> inventory;

    //append string types in inventory
    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");

    //call display function
    display(inventory);
}


//function definition
void display(const vector<string>&inventory){    
    cout << "\nYour items using iterators:\n";
    vector<string>::const_iterator iterator;
    for (iterator = inventory.begin() ; iterator != inventory.end() ; ++iterator){
        cout << *iterator << endl;
    }
    iterator = inventory.begin();

    cout << "\nYour items using index:\n";
    int index = 0;
    for (index ; index < inventory.size() ; ++index){
        cout << inventory[index] << endl;
    }
    
    cout << "\nYour items using elements\n";
    string item;
    for (string item:inventory){
        cout << item << endl;
    }
}