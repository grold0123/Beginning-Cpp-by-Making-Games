/*********************
tic_tac_toe_game
Create an empty Tic-Tac-Toe board
Display the game instructions
Determine who goes first
Display the board
While nobody’s won and it’s not a tie
If it’s the human’s turn
Get the human’s move
Update the board with the human’s move
Otherwise
Calculate the computer’s move
Update the board with the computer’s move
Display the board
Switch turns
Congratulate the winner or declare a tie
*********************/
#include<iostream>
#include<vector>
#include<array>

//type renaming
/**************************************************************/
using namespace std;
using row_type = array<char,3>;
using board_type = array<row_type,3>;
using board_piece_type = const char;
using turn_type = char;
using winner_type = char;
using player_move_type = array<int,2>;
/**************************************************************/

//constants
/**************************************************************/
board_piece_type EMPTY = ' ';
board_piece_type PLAYER = 'X';
board_piece_type COMPUTER = 'O';
board_piece_type NO_ONE = 'N';
/**************************************************************/

//helper functions
/**************************************************************/
bool first_element_is_empty(const row_type&row){//checks if first element in row is not EMPTY
    return row[0] != EMPTY;
};
bool all_elements_in_row_the_same(const row_type&row){//checks if all 3 elements in row are equal
    return (row[0] == row[1]) && (row[2] == row[1]);
};
void who_won(const row_type&row,winner_type&winner){//assign to winner variable the board piece type by checking the first element of first row
    if (row[0] == PLAYER) winner = PLAYER;
    else if (row[0] == COMPUTER) winner = COMPUTER;    
};
bool player_turn_input_valid(const int&number){
    return number <= 3 && number > 0 ;
}
bool board_position_not_occupied(const board_type&board,const player_move_type&player_move){
    return board[player_move[0]-1][player_move[1]-1] == EMPTY;
}
/*************************************************************/

//functions called in main
/***********************************************************/
void create_board(board_type&board){//places EMPTY char types in board
    for (row_type&row:board){        
        for (char&piece:row){
            piece = EMPTY;
        }        
    }
}
void draw_board(const board_type&board){//draws board
    cout << "\n\t**TIC-TAC-TOE**\n";
    cout << "\n\t---------------\n";
    for (const row_type&row:board){        
        cout << "\t | ";
        for (const char&piece:row){
            cout << piece << " | ";
        }
        cout << "\n\t---------------\n";        
    }
}
void board_check(const board_type&board,winner_type&winner){//checks rows, columns, and diagonals
    
    /*row check**********************************************/
    for (const row_type&row:board){//iterate elements in board         
        if (first_element_is_empty(row)){//check first element is not empty           
            if (all_elements_in_row_the_same(row)){//check if all elements in row are the same                      
                who_won(row,winner);//assign who won
            }
        }            
    }
    /*******************************************************/
    
    /*column check******************************************/
    /*******************************************************/


    /*diagonal check****************************************/
    /*******************************************************/    

}
void get_player_move(player_move_type&player_move){
    int row;int column;
    cout << "\n\t**Player's turn:**\n\n";
    
    //get row
    while (true){
        cout << "Enter board row you want to place your piece (1-3): ";cin >> row;cout<<endl;
        if (!player_turn_input_valid(row)){//if row is not in board
            cin.clear();cin.ignore();cout<<"invalid board row\n";system("cls");continue;            
        }
        break;
    }            
    //get column
    while (true){
        cout << "Enter board column you want to place your piece (1-3): ";cin >> column;cout<<endl;
        if (!player_turn_input_valid(column)){//if row is not in board
            cin.clear();cin.ignore();cout<<"invalid board column\n";system("cls");continue;            
        }
        break;
    }
              
    player_move[0] = row;
    player_move[1] = column;    
    cout << "You want to move to row " << row << " column " << column << endl;
}
void update_board(board_type&board,const player_move_type&player_move){    
    board[player_move[0]-1][player_move[1]-1] = PLAYER;    
}
/************************************************************/

int main(){
    board_type board;
    turn_type turn;
    winner_type winner = EMPTY;
    player_move_type player_move;
    create_board(board);    
    draw_board(board);
    while(true){
        get_player_move(player_move);
        if (board_position_not_occupied(board,player_move))update_board(board,player_move);                            
        else 
        {
            cout << "\nThat board position is occupied\n\nChoose another row and columns\n";continue;
        }
        draw_board(board);
        board_check(board,winner);
        if (winner == PLAYER || winner == COMPUTER)break;
    }    
    if (winner == PLAYER) cout << "You won, congratulations \n\n";    
    else cout << "The superior specied won, it's to be expected\n\n";
}
