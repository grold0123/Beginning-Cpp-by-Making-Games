/**************************************************
hangman
-   create a group of words
**************************************************/
#include<slow_print.h>

class Hangman{
    public:
        Hangman() : 
        words({
            "sword",
            "shield",
            "armor"
        }),
        engine(random_device{}())
        {
            get_random_word();
            secret_word_letters = vector<char>(secret_word.begin(),secret_word.end());
            for (int index = 0; index != secret_word_letters.size() ; ++ index){
                correct_guessed_letter.push_back('_');
                wrong_guessed_letter.push_back('_');
            }
        }
        mt19937 engine;
        void get_random_word(){                        
            uniform_int_distribution<int> distribution(0,words.size()-1);
            secret_word = words[distribution(engine)];  // get a random index and place here
        }
        void guess(){     
            char guess_letter;
            bool guessed = false;
            slow_print("\n\nGuess a letter in the secret word: "); cin >> guess_letter; 
            auto it = find(secret_word_letters.begin(),secret_word_letters.end(),guess_letter);                 
            for (int index = 0 ; index != secret_word_letters.size() ; ++ index){
                if (secret_word_letters[index] == guess_letter){
                    correct_guessed_letter[index] = guess_letter;   
                    guessed = true;                                     
                }
            }
            if (guessed) {
                slow_print("\n\nThe letter "); cout << guess_letter; slow_print(" is in the secret word.");
            }
            else {
                slow_print("\n\nThe letter "); cout << guess_letter; slow_print(" is not in the secret word."); 
                tries++;      
            }
                                           
            cout << endl ; slow_print("\n\nYour guess: ");
            for (int index = 0 ; index != secret_word_letters.size() ; ++index){
                if (secret_word_letters[index] == correct_guessed_letter[index]){
                    cout << correct_guessed_letter[index] << " " ;
                }
                else cout << "_ ";
            }
            slow_print("\n\nTries left: " +  to_string(limit_tries-tries));
        }
        void display_result(){   
            slow_print("\n\nThe secret word is: " + secret_word);
            if (did_you_win){
                slow_print("\n\nYou guessed it correctly, congratulations\n");
                if (tries <= 3) {
                    slow_print("\nIt only took you "+ to_string(tries) + " wrong guesses.\n\n");
                }
                else if (tries >7) {
                    slow_print("\nIt took you "+ to_string(tries) + " wrong guesses. Close\n\n");
                }
            }
            else {
                slow_print("\n\nYou were not able to guess the secret word\n");
                slow_print("\nYou tried to guess " + to_string(limit_tries) + " times already\n\n");
            }
            
        }        
        void game_loop(){
            system("cls");
            slow_print("\n\n\t\tWelcome to HANGMAN\n\n");
            slow_print("Try to guess the secret word letter by letter\nYou have " + to_string(limit_tries) + " tries"); cout << endl;
            while(true){
                if (tries == limit_tries){
                    break;
                }  
                else if (correct_guessed_letter == secret_word_letters){
                    did_you_win = true;
                    break;
                }
                guess();
            }
            display_result();

        }
    private:
        vector<string> words;
        vector<char> correct_guessed_letter = {};
        vector<char> wrong_guessed_letter = {};
        string secret_word;        
        vector<char> secret_word_letters;
        int limit_tries = 10;     
        int tries = 0;     
        bool did_you_win = false;  
        
};



int main () {
    Hangman hangman;
    hangman.game_loop();
}