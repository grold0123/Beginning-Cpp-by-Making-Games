/*********************
tic_tac_toe_game

*********************/

#include<iostream>
#include<vector>
#include<array>
using row_type = std::vector<char>;
using board_type = std::vector<row_type>;
using move_type = std::array<int,2>;
using namespace std;

enum turn{
    PLAYER,COMPUTER
};
const char PLAYER_PIECE = 'X';
const char COMPUTER_PIECE = 'O';
const char EMPTY = ' ';
const char TIE = 'T';
const char NO_ONE = 'N';

bool valid(const int& integer){
    return (integer <= 3) && (integer != 0);
}

class Board{
public:
    void display_board(){
        std::cout << "\n\t**TIC-TAC-TOE**\n";
        std::cout << "\t---------------";
        for (row_type row:this->board){            
            std::cout << "\n\t | " ;
            
            for (char board_piece:row){
                std::cout << board_piece << " | ";
            }
            std::cout << std::endl;
            std::cout << "\t---------------";
            
        }
        std::cout << "\n\n";
    }    
    void instructions(){}
    void announce_winner(){}
    void get_board_position(){
        int row;
        int column;        
        while (true){
            cout << "\nWhat row do you want to move to (1-3): "; cin >> row ;
            if(!valid(row)){
                cin.clear();cin.ignore();cout << "\nInvalid row number\n";continue;
            }
            cout << "\nWhat column do you want to move to (1-3): "; cin >> column ;
            if(!valid(column)){
                cin.clear();cin.ignore();cout << "\nInvalid column number\n";continue;
            }
            if (valid(row)&&valid(column))break;
        }
        this->move[0] = row;
        this->move[1] = column;        
    }
    bool is_occupied(){
        return (board[move[0]-1][move[1]-1] == PLAYER_PIECE) || (board[move[0]-1][move[1]-1] == COMPUTER_PIECE);
    }
    void place_piece(){
        board[move[0]-1][move[1]-1] = PLAYER_PIECE;
    }
    void game_loop(){
        this->instructions();
        while (true){
            if(this->current_turn == PLAYER){
                cout << "\nPlayer's Turn\n";
                this->get_board_position();
                if (!is_occupied()){
                    this->place_piece();
                    current_turn = COMPUTER;                    
                }
                else{
                    cout << "Board position is already occupied\n";
                    continue;
                }                                 
            }
            
            else if (this->current_turn == COMPUTER){                                
                cout << "\nComputer's Turn\n";
                create_move();
                current_turn = PLAYER;
            }
            
            this->display_board();
            
        }
        this->announce_winner();
    }
    void create_move(){
        move_type move;
        for (int x = 0 ; x < 3 ; x++){
            for (int y = 0 ; y < 3 ; y++){
                if ((board[x][y] != PLAYER_PIECE) && (board[x][y] != COMPUTER_PIECE)){
                    board[x][y] = COMPUTER_PIECE;
                    return;
                }
            }
        }
    }
    bool win(){
        //row condition
        for (row_type row:board){
            if (row[0] == row[1] == row[2]){
                if (row[0] == PLAYER_PIECE){
                    winner = PLAYER;
                }
                else winner = COMPUTER; 
                return true;            
            }            
        }
        //column condition
        int row_index = 0;
        for (int column_index = 0 ; column_index < 3 ; ++column_index){
            if (board[row_index][column_index] == board[row_index+1][column_index] == board[row_index+2][column_index]){
                if (board[row_index][column_index] == PLAYER_PIECE){
                    winner = PLAYER;
                }
                else winner = COMPUTER; 
                return true;            
            }            
        }
    }
private:
    board_type board = {
        row_type({' ',' ',' '}),
        row_type({' ',' ',' '}),
        row_type({' ',' ',' '}),
        };
    turn current_turn = PLAYER;
    move_type move;
    turn winner;

};




int main(){
    Board board;
    board.game_loop();
}