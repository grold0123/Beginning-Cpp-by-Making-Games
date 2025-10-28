#include<iostream>
#include<vector>
using row_type = std::vector<char>;
using board_type = std::vector<row_type>;



class Board{
public:
    void display_board(){
        for (row_type row:this->board){
            for (char board_piece:row){
                std::cout << board_piece;
            }
            std::cout << std::endl;
        }
    }    
private:
    board_type board = {
        row_type({'_','_','_'}),
        row_type({'_','_','_'}),
        row_type({'_','_','_'}),
        };
};




int main(){
    Board board;
    board.display_board();
}