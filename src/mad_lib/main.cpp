/**************************************************
mad_lib
creates a story based on user input
**************************************************/
#include<slow_print.h>



class Story_Teller{
public:

    Story_Teller(){
        system("cls");
        name = ask_text("Please enter a name: ");
        place = ask_text("Please enter a name of a place: ");
        monster_type = ask_text("Please enter a name of monster type: ");
        body_part = ask_text("Please enter a body part: ");
        verb = ask_text("Please enter a verb: ");
        number = ask_number("Please enter a number: ");
        system("cls");
    };
    string ask_text(string prompt){
        string answer;        
        cout << "\n\n";
        slow_print(prompt);cin >> answer;                        
        return answer;
    };
    int ask_number(string prompt){
        cout << "\n\n";
        int answer;        
        slow_print(prompt);cin >> answer;                
        return answer;
    };
    void tell_story(){
        slow_print("\n\nHere's your story:\n");
        slow_print("The famous explorer ");  slow_print(this->name);
        slow_print(" had nearly given up a life-long quest to find\n");
        slow_print("The Lost City of "); slow_print(this->place) ;
        slow_print(" when one day, the "); slow_print(this->monster_type);
        slow_print(" found the explorer.\n");
        slow_print("Surrounded by "); slow_print(to_string(this->number));cout << " ";  slow_print(this->monster_type);
        slow_print(", a tear came to "); slow_print(this->name) ;cout << "'s "; slow_print(this->body_part); cout << '\n';
        slow_print("After all this time, the quest was finally over."); slow_print(" And then, the ");slow_print(this->monster_type);
        slow_print(" promptly devoured "); slow_print(this->name); cout << "."; slow_print(" The moreal of the story? Be careful what you "); slow_print(this->verb); slow_print(" for.");

        
    };

private:        
    string name ;
    string place;
    string monster_type;
    string body_part;
    int number;    
    string verb;
};


int main () {
    Story_Teller story;    
    story.tell_story();
    cout << "\n\n";
}