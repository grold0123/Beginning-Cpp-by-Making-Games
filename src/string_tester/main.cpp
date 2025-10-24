/**************************************************
string_tester
demonstrates string objects
**************************************************/
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;



int main () {

    system("cls");

    string word_1 = "Game";

    cout  << word_1 << endl << endl;

    string word_2("Over");

    cout  << word_2 << endl << endl;

    string word_3(3,'!');

    cout  << word_3 << endl << endl;

    string phrase = word_1 + " " + word_2 + word_3;

    cout  << "Combining the three words we get, " << phrase << endl << endl;

    cout << "The phrase has " << phrase.size() << " characters in it.\n\n";

    for (int index = 0 ; index < phrase.size() ; ++index){
        cout << "The character at position " << index  << " is [" << phrase[index] << ']' <<endl << endl;
    }


}