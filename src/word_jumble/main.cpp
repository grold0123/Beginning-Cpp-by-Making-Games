/**************************************************
word_jumble

**************************************************/
#include<slow_print.h>
#include<ctime>

int main () {

    enum fields{WORD,HINT,NUM_FIELDS};
    enum difficulty{EASY,MEDIUM,HARD,NUM_DIFF_LEVELS};
    const int NUM_WORDS = 5;
    const string WORDS[NUM_WORDS][NUM_FIELDS] = {
        {"wall","Do you feel you're banging your head against something?"},
        {"glasses","These might help you see the answer."},
        {"labored","Going slowly, is it?"},
        {"persistent","Keep at it."},
        {"jumble","It's what the game is all about."}
    };
    slow_print("There are "); slow_print(to_string(NUM_DIFF_LEVELS)); slow_print(" difficulty levels.\n\n");
    srand(static_cast<unsigned int>(time(0)));
    int choice = (rand()%NUM_WORDS);
    string word = WORDS[choice][WORD];
    string hint = WORDS[choice][HINT];

    string jumble = word;
    int length = jumble.size();

    for (int i = 0 ; i < length ; ++i){
        int index_1 = (rand() % length);
        int index_2 = (rand() % length);
        char temp = jumble[index_1];
        jumble[index_1] = jumble[index_2];
        jumble[index_2] = temp;
    }

    slow_print("\t\t\tWelcome to Word Jumble!\n\n");
    slow_print("Unscramble the letters to make a word.\n");
    slow_print("Enter 'hint' for a hint.\n");
    slow_print("Enter 'quit' to quit the game.\n");
    slow_print("The jumble is: ."); slow_print(jumble); cout << endl;

    string guess;
    slow_print("\n\nYour guess: ");cin >> guess;cout << endl;
    
    while ( (guess != word) && (guess!= "quit") ){
        if(guess == "hint"){
            slow_print(hint);
        }
        else{
            slow_print("Sorry, that's not it.");
        }
        cout << '\n';
        slow_print("\nYou guess: "); cin >> guess;    
        
    }
    if(guess==word){
        slow_print("\nThat's it! You guessed it!\n");
    }
    slow_print("\nThanks for playing.\n");

}