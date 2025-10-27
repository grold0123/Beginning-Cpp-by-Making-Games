/**************************************************
tic_tac_toe_game
Create an empty tic-tac-toe board
**************************************************/
#include<vector>
#include<iostream>
using row = std::vector<char>;
using namespace std;
class Board{
//static members    
    static constexpr int number_of_characters_per_row = 3;
    static constexpr int number_of_rows = 3;    
private:    
    std::vector<row> board;
public:    
    void draw(){
        for (const row&row:board){
            for (const char&character:row){
                cout << character;
                if (character != row[(row.size()-1)]) cout << " : ";                
            }
            cout << endl;
        }
    }

//constructor
    Board():
    board(number_of_rows,row(number_of_characters_per_row,'_'))
    {}
    
};



int main(){
    Board board;
    board.draw();
}