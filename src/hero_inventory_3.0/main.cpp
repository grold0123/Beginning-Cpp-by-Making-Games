/**************************************************
hero_inventory_3.0
demonstrates iterator
**************************************************/
#include<slow_print.h>



int main () {
    system("cls");
    vector<string> inventory = {
        "sword","armor","shield"
    };
    vector<string>::iterator iterator;
    vector<string>::const_iterator const_iterator;

    slow_print("\n\nYour items:\n");
    for (
        iterator = inventory.begin() ; 
        iterator != inventory.end() ; 
        ++iterator
    ){
        slow_print(*iterator+"\n");
    }
    iterator = inventory.begin();
    slow_print("\nThe item name '" + *iterator + 
        "' has " + to_string((*iterator).size()) + " letters in it.\n");
    
    slow_print("\nYour recover a crossbow from a slain enemy.\n");
    inventory.insert(inventory.begin(),"crossbow");
    slow_print("\nYour items:\n");
    for (iterator=inventory.begin();iterator!=inventory.end();++iterator){
        slow_print(*iterator+"\n");
    };

    slow_print("\nYour armor is destroyed in a fierce battle.\n");
    inventory.erase((inventory.begin()+2));
    for (iterator=inventory.begin();iterator!=inventory.end();++iterator){
        slow_print(*iterator+"\n");
    };
}