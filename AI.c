#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include "ticTacToe.h"

int gameModeStart() {
    char gameMode;
    int exit = 0;
    while (exit == 0) {
      printf("\nDo you want to play single or multiplayer? (s/m)\n");
      scanf(" %c", &gameMode);
      gameMode = tolower(gameMode);
      if (isalpha(gameMode) != 0){
        if ((gameMode == 's') || (gameMode == 'm')) {
            exit = 1;
            if (gameMode == 'm') {
                printf("You have chosen multiplayer\n");
                return 0;
            }
            else {
                printf("You have chosen singleplayer\n");
                return 1;
            }
        }
      }
      else{
        printf("Invalid Input");
      }
    }
}

int errorCheck(int matrix[3][3], int x, int y, int z) {
    int	validCheck = 0;

    if (((matrix[(y - 1)][(x - 1)]) == 11) || ((matrix[(y - 1)][(x - 1)]) == 19)) {
        return 0;
    }
    else {
        return 1;
    }
}
mat easyMode(int matrix[3][3], int size, int dimention) {
    mat position;
    srand(time(NULL));
    int randX = rand() % (size);
    int randY = rand() % (size);
    int randZ = rand() % (dimention);

    while (errorCheck(matrix, randY, randX, randZ) == 0) {
        int randX = rand() % (size);
        int randY = rand() % (size);
        int randZ = rand() % (dimention);
    }
    //	return position
    position.row = randY + 1;
    position.col = randX + 1;
    return position;

}