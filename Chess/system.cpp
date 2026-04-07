#include <iostream>
#include "system.h"
using namespace std;
int insertLetterConverter (char insertedLeter){
    switch (insertedLeter){
        case 'a' : return 0; break;
        case 'b' : return 1; break;
        case 'c' : return 2; break;
        case 'd' : return 3; break;
        case 'e' : return 4; break;
        case 'f' : return 5; break;
        case 'g' : return 6; break;
        case 'h' : return 7; break;
    }
};

int insertNumberConverter (int insertedNumber){
    switch (insertedNumber){
        case 8 : return 0; break;
        case 7 : return 1; break;
        case 6 : return 2; break;
        case 5 : return 3; break;
        case 4 : return 4; break;
        case 3 : return 5; break;
        case 2 : return 6; break;
        case 1 : return 7; break;
    };
}

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}