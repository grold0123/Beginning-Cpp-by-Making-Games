/**************************************************
high_score
demonstrates algorithms
**************************************************/
#include<slow_print.h>
int main () {
    system("cls");
    vector<int>::const_iterator constant_iterator;
    slow_print("\n\nCreating a list of scores");
    vector<int> scores;
    scores.push_back(1500);
    scores.push_back(3500);
    scores.push_back(7500);
    slow_print("\n\nHigh Scores:\n");
    for (constant_iterator = scores.begin() ; constant_iterator != scores.end() ; ++constant_iterator){
        slow_print(to_string(*constant_iterator)) ; cout << endl;
    }
    slow_print("\nFinding a score.");
    int score;
    slow_print("\nEnter a score to find: "); cin >> score; cout << endl;
    constant_iterator = find(scores.begin() , scores.end() , score) ;
    if (constant_iterator != scores.end()) slow_print("\nScore found.\n");
    else slow_print("\nScore not found.\n");
    slow_print("\nRandomizing scores.");    
    mt19937 seed(static_cast<unsigned int>(time(0)));
    shuffle(scores.begin(),scores.end(),seed);
    slow_print("\n\nHigh Scores:\n");
    for (constant_iterator = scores.begin() ; constant_iterator != scores.end() ; ++constant_iterator) {
        slow_print(to_string(*constant_iterator)) ; cout << endl;
    }


}