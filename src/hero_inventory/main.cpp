/**************************************************
hero_inventory
demonstrates arrays
**************************************************/
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;


void display_inventory(string inventory[], int size){
    cout << "\n\nYour items:\n";
    for (int index = 0 ;  index < size ; ++index){
        cout << index + 1 << ". " <<inventory[index] << endl;
    }
}

void trade(string inventory[],const string&new_item,string item){
    cout << "Trading " << item << " for a " << new_item << endl;
    
}

int main () {

    const int MAX_ITEMS = 10;
    string inventory[MAX_ITEMS];    

    int inventory_index = 0;

    inventory[inventory_index++] = "sword";
    inventory[inventory_index++] = "armor";
    inventory[inventory_index++] = "shield";

    display_inventory(inventory,inventory_index);

}