#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include "ticTacToe.h"

int gameModeStart(){
  char gameMode;
  int exit = 0;
  
  printf("Do you want to play single or multiplayer? (s/m)\n");
  scanf("%c",gameMode);
  gameMode = tolower(gameMode);
  
  while (exit == 0){
    if ((gameMode == 's')||(gameMode == 'm')){
      exit = 1;
      if (gameMode == 'm'){
        return 0;
      }
      else{
        return 1;
      }
    }
  }
}

int easyMode(int matrix[3][3], int size, int dimention){
	srand(time(NULL));
	int randX = rand()%(size);
	int randY = rand()%(size);
	int randZ = rand()%(dimention);

	while (errorCheck(matrix,randY,randX,randZ) == 0){
      		int randX = rand()%(size);
       		int randY = rand()%(size);
	        int randZ = rand()%(dimention);
	}
//	return position
  matrix[(randY-1)][(randX-1)] = 11;
  return matrix;

}

//int hardMode(matrix, size, dimentions, turn
// if player places on corner
//int matrix
//int size
//	if(matrix[0][0] = change 
	 
// i fplayer places on edge
// if player places on middle

int errorCheck(int matrix[3][3], int x, int y, int z){
  int	validCheck = 0;
	
	while (validCheck == 0){
    if ((matrix[(y-1)][(x-1)]) != 11){
        return 0;
    }
    else{
      return 1;
    }    
  }
} 

