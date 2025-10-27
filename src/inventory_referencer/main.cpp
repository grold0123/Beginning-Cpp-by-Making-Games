/**************************************************
inventory_referencer
demonstrates returning a reference
**************************************************/
#include<iostream>
#include<string>
#include<vector>

using namespace std;

//return a reference to a string 
string&reference(vector<string>&vector_var,int integer_var);
void add_to_reference(vector<string>&inventory,string item);

int main(){

    vector<string> inventory;

    add_to_reference(inventory,"sword");
    add_to_reference(inventory,"armor");
    add_to_reference(inventory,"shield");

    cout << "Sending the returned reference to cout:\n";    
    cout << reference(inventory,0) << "\n\n";

    //assigns a reference to a reference -- inexpensive assignment
    cout << "Assigning the returned reference to another reference.\n";
    string&reference_sample_item = reference(inventory,1);

    cout << "Sending the new reference to cout:\n";
    cout << reference_sample_item << endl << endl;

    //copies a reference -- expensive assignment
    cout << "Assigning the returned reference to a string object.\n";
    string sample_item = reference(inventory,2);

    cout << "Sending the new string object to cout:\n";
    cout << sample_item << endl << endl;

    //altering the string object through a returned reference
    cout << "Trading "  << inventory[1] << " for a Healing Potion\n";
    reference_sample_item = "Healing Potion";

    cout << "Sending the altered object to cout:\n";
    cout << inventory[1] << endl << endl;

    //altering the the new string object that was created from a returned reference
    sample_item = "Phoenix Down";
    cout << "The second item in our inventory: " <<inventory[1] << endl;
    cout << "The new string object: " << sample_item;

}

string&reference(vector<string>&vector_var,int integer_var){
    return vector_var[integer_var];
}

void add_to_reference(vector<string>&vector_var,string item){
    vector_var.push_back(item);
}

