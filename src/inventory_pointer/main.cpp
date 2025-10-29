/**************************************************
inventory_pointer
demonstrates returning a pointer
**************************************************/
#include<iostream>
#include<string>
#include<vector>

using namespace std;
using constant_vector_string_pointer = vector<string>*const;
using string_container = vector<string>;
using string_pointer = string*;

string*pointer_to_element(string_container vec,int i);

int main(){
    
    string_container inventory;
    
    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");

    cout << "\nSending the object pointed to by returned pointer: " << *(pointer_to_element(&inventory,0));

    cout << "\n\nAssigning the returned pointer to another pointer.";string_pointer string_pointer = pointer_to_element(&inventory,1);

    cout << "\n\nSending the object pointed to by new pointer to cout:" << *string_pointer;



}


string*pointer_to_element(string_container vec,int i){ 
    return &(vec[i]);
}