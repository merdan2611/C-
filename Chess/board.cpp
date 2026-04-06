#include <iostream>
#include "board.h" 
using namespace std;


void drawBoard(int chessBoard[8][8]) {
    int count = 8;
    for (int i = 0; i < 8; i++) {
        for (int j = -1; j < 8; j++) {
            if (j < 0) {
                cout << count << "|";
                count--;
            } else {
                if (chessBoard[i][j] == -1) { cout << " ♙"; }
                if (chessBoard[i][j] == -2) { cout << " ♖"; }
                if (chessBoard[i][j] == -3) { cout << " ♘"; }
                if (chessBoard[i][j] == -4) { cout << " ♗"; }
                if (chessBoard[i][j] == -5) { cout << " ♕"; }
                if (chessBoard[i][j] == -6) { cout << " ♔"; }
                if (chessBoard[i][j] == 0) { cout << " •"; }
                if (chessBoard[i][j] == 1) { cout << " ♟"; }
                if (chessBoard[i][j] == 2) { cout << " ♜"; }
                if (chessBoard[i][j] == 3) { cout << " ♞"; }
                if (chessBoard[i][j] == 4) { cout << " ♝"; }
                if (chessBoard[i][j] == 5) { cout << " ♛"; }
                if (chessBoard[i][j] == 6) { cout << " ♚"; }
            }
        }
        cout << '\n';
    }
}
