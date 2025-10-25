/**************************************************
tictactoe_board
demonstrates multidimensional arrays
**************************************************/
#include<iostream>
#include<cstdlib>
#include<chrono>
#include<thread>
using namespace std;

void slow_print(const string&text,int delay_ms = 20,bool spaced = false){
    for (char c: text){
        if (spaced){          
            cout << c << " | ";            
        }                                            
        else{
            cout << c;
        }
        cout << flush;                
        this_thread :: sleep_for (chrono::milliseconds(delay_ms));
    }    
};

class Board{
    public:
        static const int ROWS = 3;
        static const int COLUMNS = 3;
        char board[ROWS][COLUMNS] = {
            {'O','X','O'},
            {' ','X','X'},
            {'X','O','O'},
        };

        void display(){
            slow_print("Here's the tic-tac-toe board:\n\n");
            cout << "*****************************\n";
            for (int i = 0 ; i < ROWS ; ++i){
                cout << "-------------";
                cout << endl;
                cout << "| ";
                for (int j = 0 ; j < COLUMNS ; ++j ){
                    
                    slow_print(string(1,board[i][j]),20,true);
                }
                
                cout << endl;
                
            }
            cout << "-------------";
            cout << endl;
            cout << "*****************************\n";
        };
        
        void play(){
            slow_print("Player 1 moves: \n");
            
        };

};




int main () {
system("cls");
Board board;
board.display();
slow_print("\n\n'X' moves to the empty location.\n\n");
board.board[1][0] = 'X';

slow_print("\n\nNow the tic-tac-toe board is :\n");
board.display();

slow_print("\n'X' wins!");

}