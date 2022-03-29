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
  scanf("%c",&gameMode);
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

int errorCheck(int matrix[3][3], int x, int y, int z){
  int	validCheck = 0;
	
  if (((matrix[(y-1)][(x-1)]) == 11)||((matrix[(y-1)][(x-1)]) == 19)){
      return 0;
  }
  else{
    return 1;
  }    
}
mat easyMode(int matrix[3][3], int size, int dimention){
	mat position;
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
   position.row = randY;
   position.col = randX;
  return position;

}
