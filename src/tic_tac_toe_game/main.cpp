/**************************************************
tic_tac_toe_game
Create an empty tic-tac-toe board
Display instructions
randomize 
**************************************************/
#include<vector>
#include<iostream>
using row = std::vector<char>;
using namespace std;

enum player{HUMAN,COMPUTER};

/**********
declaration
**********/
class TicTacToe{
private:
    int number_of_rows = 3;
    int number_of_columns = 3;
    vector<row> board;
public:
    void instructions();
    void display_board();
    void change_piece(int&row,int&column,char&piece);
    bool valid_move(int&row,int&column);
    TicTacToe();
};


/*******************
    main start
*******************/
int main(){
    TicTacToe board;    
    player current_player = HUMAN;
    board.display_board();

    int row = 2;
    int column = 2;
    char piece = 'O';
    if (board.valid_move(row,column)){
        board.change_piece(row,column,piece);
    }
    
    board.display_board();
}
/*******************
    main end
*******************/

/**********
definition
**********/

TicTacToe::TicTacToe():board(number_of_rows,row(number_of_columns,'_')){
    cout << "\n\n\t***TIC-TAC-TOE***\n\n";
}
void TicTacToe::display_board(){    
    cout << "\t----------------\n";
    for (const row&row:this->board){
        cout << "\t | ";
        for (const char&character:row){
            cout << character << " | "; 
        }
        
        cout << "\n\t----------------\n";        
    }
}
void TicTacToe::change_piece(int&row,int&column,char&piece){
    char&board_piece = this->board[row][column];
    board_piece = piece;
}
bool TicTacToe::valid_move(int&row,int&column){
    if (row > 2 or column > 2) {
        cout << "Invalid move: Board placement error\n";
        return false;
    }
    else if (board[row][column] != '_' ){
        cout << "Invalid move: Board position occupied\n";
        return false;
    }
    return true;
}