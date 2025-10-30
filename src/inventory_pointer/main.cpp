/**************************************************
inventory_pointer
demonstrates returning a pointer
**************************************************/
#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>
#include<memory>

using namespace std;
using constant_vector_string_pointer = vector<string>*const;
using string_container = vector<string>;
using string_pointer = string*;


string*pointer_to_element(constant_vector_string_pointer vec,int i);

void display_inventory(const string_container*vec_pointer);

int main(){

    system("cls");

    string_container inventory;
    
    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");

    cout << "\nDisplaying a derefenced pointer to the first element in inventory *(pointer_to_element(&inventory,0)): " << *(pointer_to_element(&inventory,0));

    cout << "\n\nAssigning a pointer to the second item. string_pointer string_pointer = pointer_to_element(&inventory,1) ";string_pointer string_pointer = pointer_to_element(&inventory,1);

    cout << "\n\nDisplaying the dereferenced pointer to the second item: *string_pointer : " << *string_pointer;

    cout << "\n\nChanging the value of the item the pointer is pointing to: *string_pointer = 'Healing Potion' " ; *string_pointer = "Healing Potion"; 

    cout << "\n\nDisplaying current dereferenced value of pointer: " << *string_pointer;

    cout << "\n\n";

    display_inventory(&inventory); 
}

string*pointer_to_element(constant_vector_string_pointer vec_pointer,int i){ 
    return &(*vec_pointer)[i];
}

void display_inventory(const string_container*vec_pointer){    
    
    unique_ptr<int> count = make_unique<int>(1);
    cout << "Inventory:\n\n";
    for (const string&item:*vec_pointer){
        cout << '\t' << *count << ". " << item << '\n';
        (*count)++;
    }
}