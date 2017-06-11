#include <iostream>
#include <vector>
#include <string>


using namespace std;

 class ticTacToe{
    public:
        char board1[4][5] = {{' ', '|', ' ', '|', ' '},
                             {'-', '+', '-', '+', '-'},
                             {' ', '|', ' ', '|', ' '},
                             {'-', '+', '-', '+', '-'};
       // char board[3][3] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

}


int main (){

 for(int i=0; i<board1.length; i++) {
    for(int j=0; j< board1[0].length; j++) {
      cout << board1[i][j];
    }
 }

}
 };

