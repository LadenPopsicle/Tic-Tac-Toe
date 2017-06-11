#include <iostream>
#include <vector>
#include <string>


using namespace std;

 class ticTacToe{
    public:
        char board1[4][5] = {{' ', '|', ' ', '|', ' '},
                             {'-', '+', '-', '+', '-'},
                             {' ', '|', ' ', '|', ' '},
                             {'-', '+', '-', '+', '-'}};
       // char board[3][3] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

};


int main (){

char board1[5][5] = {{' ', '|', ' ', '|', ' '},
                     {'-', '+', '-', '+', '-'},
                     {' ', '|', ' ', '|', ' '},
                     {'-', '+', '-', '+', '-'},
                     {' ', '|', ' ', '|', ' '}};

 for(int i=0; i<sizeof(board1)/sizeof(board1[0]); i++) {
    for(int j=0; j< sizeof(board1[0])/sizeof(char); j++) {
      cout << board1[i][j];
    }
    cout <<endl;
 }

}
