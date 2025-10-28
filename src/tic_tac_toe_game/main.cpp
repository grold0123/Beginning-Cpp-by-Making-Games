/**************************************************
tic_tac_toe_game
Create an empty tic-tac-toe board
Display instructions
randomize 
**************************************************/

#include<iostream>
#include<vector>
#include<array>
#include<random>
#include<chrono>

using board_type = std::vector<std::vector<char>>;
using player_move_type = std::array<int,2>;

enum turn{
    PLAYER,COMPUTER
};

void change_board_piece(board_type&,const player_move_type&,char);
char&get_board_piece(const board_type&,const player_move_type&);
void display_board(const board_type&);
void get_player_move(player_move_type&);
void random_move(player_move_type&);
int get_random(std::mt19937&,std::uniform_int_distribution<int>);

int main(){

    std::mt19937 rng(std::random_device{}());
    std::uniform_int_distribution<int> dist(0,2);

    

    board_type board = {
        {'_','_','_'},
        {'_','_','_'},
        {'_','_','_'},
    };    

    turn turn = PLAYER;

    player_move_type player_move;
    player_move_type computer_move;

    display_board(board);

    while(1){        

        if (turn == PLAYER){
            get_player_move(player_move);
            change_board_piece(board,player_move,'X');
            turn = COMPUTER;
        }

        else if (turn == COMPUTER){
            random_move(computer_move);
            change_board_piece(board,player_move,'O');
            turn = PLAYER;
        }
        
        display_board(board);
    }
    
}

int get_random(std::mt19937&rng,std::uniform_int_distribution<int>&dist){
    return dist(rng);
}
char&get_board_piece(board_type&board,const player_move_type&player_move){
    return board[player_move[0]][player_move[1]];
}
void change_board_piece(board_type&board,const player_move_type&player_move,char character){
    get_board_piece(board,player_move) = character;
    
}
void display_board(const board_type&board){
    system("cls");
    std::cout << "\t**TIC-TAC-TOE**\n";
    std::cout << "\t---------------\n";
    for (std::vector<char> row:board){
        std::cout << "\t | ";
        for (char character:row){
            std::cout << character << " | ";
        }
        std::cout << std::endl;
        std::cout << "\t---------------";
        std::cout << std::endl;
    }
}
void get_player_move(player_move_type&player_move){
    int row=0;
    int column=0;
    while (1){        
        std::cout << "\nIn what row do you want to move (1-3): " ; std::cin >> row; std::cout << std::endl;
        if (std::cin.fail()){
            std::cin.clear();
            std::cin.ignore();
            std::cout << "\nInvalid input, please enter numbers only.\n";
            continue;
        }
        std::cout << "\nIn what column do you want to move (1-3): " ; std::cin >> column; std::cout << std::endl;
        if (std::cin.fail()){
            std::cin.clear();
            std::cin.ignore();
            std::cout << "\nInvalid input, please enter numbers only.\n";
            continue;
        }
        if ((row <= 3 && column <= 3) && (row != 0 && column != 0)) break;
        else std::cout << "You entered wrong an invalid board position\n";
    }
    
    player_move = player_move_type{row-1,column-1};
}
void random_move(player_move_type&computer_move,int random_value_for_row,int random_value_for_column){
    int row=0;
    int column=0;
}