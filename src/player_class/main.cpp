/**************************************************
player_class
run.py player_class
simulates a game lobby where players wait
**************************************************/
#include<iostream>
using namespace std;

/**************************************************/
class Player{
    public:
    Player(const string&name="");
    string get_name()const;
    Player*get_next()const;
    void set_next(Player*pointer_to_next);
    private:
    string player_name;
    Player*pointer_to_next_player;
};
/**************************************************/
Player::Player(const string&player_name_arg):
player_name(player_name_arg),pointer_to_next_player(0){}
string Player::get_name()const{
    return player_name;
}
Player*Player::get_next()const{
    return pointer_to_next_player;
}
void Player::set_next(Player*pointer_to_next_arg){
    this->pointer_to_next_player = pointer_to_next_arg;
}
/**************************************************/
class Lobby{
    friend ostream&operator<<(ostream&os,const Lobby& lobby_object);
    public:
    Lobby();
    ~Lobby();
    void add_player();
    void remove_player();
    void clear();
    private:
    Player* pointer_to_head_player;
};
/**************************************************/
Lobby::Lobby():pointer_to_head_player(0){}
Lobby::~Lobby(){this->clear();}
void Lobby::add_player(){
    cout << "Please enter the name of the new player: ";
    string name;
    cin>>name;
    Player* new_pointer_to_head_player = new Player(name);

    if (this->pointer_to_head_player == 0) this->pointer_to_head_player = new_pointer_to_head_player;
    else {
        Player* player_iterator = this->pointer_to_head_player;
        while(player_iterator->get_next() != 0) {
            player_iterator = player_iterator->get_next();
        }
        player_iterator->set_next(new_pointer_to_head_player);
    }
}
void Lobby::remove_player(){
    if(this->pointer_to_head_player == 0) cout << "\n\nThe game lobby is empty. No one to remove!\n";
    else{
        Player*temporary_player = this->pointer_to_head_player;
        this->pointer_to_head_player = pointer_to_head_player->get_next();
        delete temporary_player;
    }
}
void Lobby::clear(){
    while(this->pointer_to_head_player != 0){
        this->remove_player();
    }
}
ostream&operator<<(ostream&os,const Lobby&lobby_object){
    Player*player_iterator = lobby_object.pointer_to_head_player;
    os << "\nHere's who's in the game lobby:\n";
    if (player_iterator == 0) os << "The lobby is empty.\n";
    else {
        while (player_iterator != 0){
            os << player_iterator->get_name() << endl;
            player_iterator = player_iterator->get_next();
        }
    }
    return os;
}

/**************************************************/
int main(){
    Lobby team_1;
    int choice;
    while(true){
        cout << team_1;
        cout << "\nGame LOBBY\n";
        cout << "0 - Exit the program.\n";
        cout << "1 - Add a player to the lobby.\n";
        cout << "2 - Remove a player from the lobby.\n";
        cout << "3 - Clear the lobby.\n";
        cout << endl << "Enter choice: "; cin >> choice;
        switch(choice){
            case 0: cout << "Good bye.\n";break;
            case 1: team_1.add_player();break;
            case 2: team_1.remove_player();break;
            case 3: team_1.clear();break;
            default: cout << "That was not a valid choice.\n";
        }
        if (choice == 0) break;        
    }
}
/**************************************************/