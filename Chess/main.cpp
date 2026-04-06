#include <iostream>
#include "board.h"
#include "system.h"
using namespace std;


int chessBoard[8][8] = {
    {-2, -3, -4, -5, -6, -4, -3, -2},
    {-1, -1 ,-1 ,-1 ,-1 ,-1, -1, -1},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1},
    {2, 3, 4, 5, 6, 4, 3, 2}
};



int main(){
    clearScreen();
    drawBoard(chessBoard);
    return 0;
}






