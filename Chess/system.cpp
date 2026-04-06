#include <iostream>
#include "system.h"


void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}