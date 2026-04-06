#include <iostream>
using namespace std;

int chessBoard [9][9]= {
    {-2, -3, -4, -5, -6, -4, -3, -2},
    {-1, -1 ,-1 ,-1 ,-1 ,-1, -1, -1},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1},
    {2, 3, 4, 5, 6, 4, 3, 2}
};

void drawBoard (int chessBoard[9][9]){
    int count = 8;
    for(int i = 0 ; i<=8; i++){
        for(int j= -1; j<=7; j++){
           if (i<8){
                if (j<0){
                    cout << count << "|" ;
                    count--;
                }else{

                    if(chessBoard[i][j]==-1){cout<< " ♙";}
                    if(chessBoard[i][j]==-2){cout<< " ♖";}
                    if(chessBoard[i][j]==-3){cout<< " ♘";}
                    if(chessBoard[i][j]==-4){cout<< " ♗";}
                    if(chessBoard[i][j]==-5){cout<< " ♕";}
                    if(chessBoard[i][j]==-6){cout<< " ♔";}
                    if(chessBoard[i][j]==0){cout<< " •";}
                    if(chessBoard[i][j]==1){cout<< " ♟";}
                    if(chessBoard[i][j]==2){cout<< " ♜";}
                    if(chessBoard[i][j]==3){cout<< " ♞";}
                    if(chessBoard[i][j]==4){cout<< " ♝";}
                    if(chessBoard[i][j]==5){cout<< " ♛";}
                    if(chessBoard[i][j]==6){cout<< " ♚";}
                }

           } 

        }
        cout << '\n';
    }

}

int main(){
    drawBoard(chessBoard);
    return 0;
}
