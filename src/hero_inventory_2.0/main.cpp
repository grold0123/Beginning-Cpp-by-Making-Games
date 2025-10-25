/**************************************************
hero_inventory_2.0

**************************************************/
#include<slow_print.h>
#include<vector>

class Inventory{
public:    
    Inventory(){
        items.push_back("sword");
        items.push_back("armor");
        items.push_back("shield");
    };
    void display_items(){
        slow_print("Items:\n");
        int i = 1;
        for (string item:items){
            slow_print(to_string(i));slow_print(". "s);slow_print(item);cout << endl;
            i++;
        }
        cout << "\n\n";
    }
    void trade(string item){
        slow_print("You want to trade "); slow_print(item); slow_print(" for:\n");
        display_items();cout << endl << endl;
        int index;
        slow_print("Choose the item number: "); cin >> index ; cout << endl << endl;           
        slow_print("You traded " + items[index-1] + " for " + item +"\n\n");
        items[index-1] = item;    

    }
private:
    vector<string> items = {};
};


int main () {
    Inventory backpack;
    backpack.display_items();
    backpack.trade("potion");
    backpack.display_items();
}