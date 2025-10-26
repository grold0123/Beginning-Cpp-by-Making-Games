/**************************************************
hero_inventory_2.0

**************************************************/
#include<slow_print.h>


class Inventory{
public:    
    Inventory():items({"sword","shield","armor"}){ //constructor 
        
    };
    void add_item(string item){
        slow_print("\n\nYou added "+item+" to your inventory");
        items.push_back(item);
    }
    void display_items(){
        slow_print("\n\nItems:\n");
        int i = 1;
        for (string item:items){
            slow_print(to_string(i));slow_print(". "s);slow_print(item);cout << endl;
            i++;
        }
        
    }
    void trade(string item){
        slow_print("\n\nYou want to trade "); slow_print(item); slow_print(" for:\n");        
        int index;
        slow_print("Choose the item number: "); cin >> index ; cout << endl << endl;           
        slow_print("You traded " + items[index-1] + " for " + item +"\n\n");
        items[index-1] = item;    

    }
    bool item_found(string item){        
        return find(items.begin(),items.end(),item) != items.end();
    }
    void remove_item(string item){
        vector<string> new_vector = {};
        if(item_found(item)){
            slow_print("\n\nDropped "+item+" from your inventory");
            for (int index=0;index < items.size();++index){
                if (items[index]==item) {
                    continue;
                }
                new_vector.push_back(items[index]);            
            }
            items = new_vector;
        }
        else{
            slow_print("\n\n"+item+" not found in inventory");}
        
    }
private:
    vector<string> items = {};
};


int main () {
    Inventory backpack;
    backpack.display_items();
    backpack.trade("potion");
    backpack.display_items();
    backpack.add_item("bazooka");
    backpack.display_items();
    backpack.remove_item("potion");
    backpack.display_items();

}