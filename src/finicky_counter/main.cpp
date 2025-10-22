/**************************************************
finicky_counter
demonstrates break and continue statements
**************************************************/
#include<iostream>
#include<cstdlib>
using namespace std;

int main () {
    system("cls");
    int count = 0;

    while (true){
        count += 1;        
        if (count > 10){
            break;
        }
        if (count == 5){
            cout << "I dont like this number" << endl << endl;
            continue;
        }
        cout << "The number is " << count << endl << endl;

    }

}