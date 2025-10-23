/**************************************************
designers_network
demonstrates logical operators
**************************************************/
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

void app(string&username,string&password,bool&success){
    system("cls");
    if (username == "S. Meier" && password == "civilization"){
        cout << "\nHey, Sid.\n";
        success = true;
    }
    else if (username == "S. Miyamoto" && password == "mariobros"){
        cout << "\nWhat's up, Shigeru?\n";
        success = true;
    }
    else if (username == "W. Wright" && password == "thesims"){
        cout << "\nHow goes it, Will?\n";
        success = true;
    }
    else if (username == "guest" || password == "guess"){
        cout << "\nWelcome, guest.\n";
        success = true;
    }
    else{
        cout << "\nYour login failed.\n\n";
        success = false;
    }
}


int main () {

    system("cls");

    string username,password;
    bool success = false;

    cout << "\n\n\tGame Designer's Network\n\n";

    while (!success){
        cout << "Username: "; cin >> username; cout << endl; 
        cout << "Password: "; cin >> password; cout << endl;
        app(username,password,success);
    }


}