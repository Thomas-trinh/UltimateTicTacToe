#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

#include "NBTicTacToe.h"

int main() {

    //srand(time(NULL)); 
    NBTicTacToe game;
    game.play();

    return 0;
}
