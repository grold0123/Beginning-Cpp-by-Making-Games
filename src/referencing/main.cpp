/**************************************************
referencing
demonstrates using references
**************************************************/
#include <iostream>

using namespace std;

int main () {
    int my_score = 1000;
    int&mikes_score = my_score;    // reference to my score

    cout << "my_score is: " << my_score << "\n";
    cout << "mikes_score is: " << mikes_score << "\n\n";

    cout << "adding 500 to my_score\n";
    my_score += 500;

    cout << "my_score is: " << my_score << "\n";
    cout << "mikes_score is: " << mikes_score << "\n\n";

    cout << "adding 500 to mikes_score\n";
    mikes_score += 500;

    cout << "my_score is: " << my_score << "\n";
    cout << "mikes_score is: " << mikes_score << "\n\n";
}