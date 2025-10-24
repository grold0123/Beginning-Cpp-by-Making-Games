/**************************************************
hero_inventory
demonstrates arrays
**************************************************/
#include<iostream>
#include<string>
#include<cstdlib>
#include<chrono>
#include<thread>
using namespace std;

void slow_print(const string&text, int delay_ms = 30){
    for (char c: text){
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(delay_ms));
    }
};

void display_inventory(string inventory[], int inventory_size){
    slow_print("\n\nYour items:\n\n");
    
    for (int index = 0 ;  index < inventory_size ; ++index){
        string numbering = to_string(index+1);
        string dot = ". ";
        string item = inventory[index] + "\n\n";
        slow_print(numbering);
        slow_print(dot);
        slow_print(item);
    }
}

void display_shop_inventory(string shop_inventory[], int shop_size){
    cout << "\n\nShop items:\n\n";
    for (int index = 0 ; index < shop_size ; ++index){
        string numbering = to_string(index+1);
        string dot = ". ";
        string item = shop_inventory[index] + "\n\n";
        slow_print(numbering);
        slow_print(dot);
        slow_print(item);
    }
};


int main () {
    system("cls");
    const int MAX_ITEMS = 10;
    string inventory[MAX_ITEMS];    
    string shop_inventory[MAX_ITEMS*2];

    int inventory_index = 0;
    int shop_inventory_index = 0;

    char user_choice = 0;

    int shop_choice = 0;

    int inventory_choice = 0;

    inventory[inventory_index++] = "sword (damage: +10)";
    inventory[inventory_index++] = "armor (defense: +5)";
    inventory[inventory_index++] = "shield (defense: +5)";

    shop_inventory[shop_inventory_index++] = "potion (current hp: +25)";
    shop_inventory[shop_inventory_index++] = "antidote (cures status: poison)";
    shop_inventory[shop_inventory_index++] = "phoenix down (cures status: KO)";
    shop_inventory[shop_inventory_index++] = "ether (current mp: +15)";

    slow_print("\n");

    slow_print("\nWhat do you want to do?\n");
    
    slow_print("Trade items: Press e\n");
    slow_print("Display inventory: Press w\n");
    
    slow_print("");

    cin >> user_choice; cout << endl << endl;
    system("cls");

    if (user_choice == 'w') {display_inventory(inventory,inventory_index);}
    else if (user_choice == 'e') {
        slow_print("\nWhat shop item do you want to trade?");
        display_shop_inventory(shop_inventory,shop_inventory_index);
        slow_print("\nChoose the item shop number: ");
        cin >> shop_choice ; 
        slow_print("You chose: ");                
        slow_print(shop_inventory[shop_choice-1]);
        cout << "\n\n";
        slow_print("\nWhat inventory item do you want to trade?");
        display_inventory(inventory,inventory_index);
        slow_print("\nChoose the item inventory number: "); 
        cin >> inventory_choice ; 
        slow_print("You chose: "); 
        slow_print(inventory[inventory_choice-1]);
        cout << "\n\n";

        slow_print("Trading "); slow_print(shop_inventory[shop_choice-1]); slow_print(" for "); slow_print(inventory[inventory_choice-1]); cout << endl;
        inventory[inventory_choice-1] = shop_inventory[shop_choice-1];

        slow_print("\n\nTrade successful\n\n");

        slow_print("This is your new inventory\n\n");

        display_inventory(inventory,inventory_index);

    
    }



}