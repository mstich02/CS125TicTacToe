#include "ticTacToe.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// x is 19 o is 11
//We used a prime number to calculate a win condition
int winCheck(int total, int size, int dimention);

int diagonalWin(int matrix[3][3],int size,int dimention){
// Variables For the horizontal win condition
	int count;
	int count2;
	int horizontalLR = 0;
	int horizontalRL = 0;
	int win1;
	int win2;



	for(count = dimention;count > 0;count--){
// Looks at the first diagonal going from the top left corner to bottom right
		for (count = (size-1); count>=0;count--){
			horizontalLR = horizontalLR + matrix[count][count];  
		} 
// Looks at the other diagonal
		for (count = (size-1); count>=0;count--){
			horizontalRL = horizontalRL + matrix[count][(size-(count+1))];
		}	
// Calls the win check and outputs a win condition
		win1 = winCheck(horizontalLR,size,dimention);
		win2 = winCheck(horizontalRL,size,dimention);
	
		if (win1 > 0){
			return win1;
		}
		else if (win2 > 0){
			return win2;
		}
		else{
			return (win1+win2);
		}
	}
}
int horizontalWin(int matrix[3][3],int size,int dimention){
// Variables for the horizontal win
	int row;
	int col;
	int count;
	int win = 0; 
	int total = 0;
	row = (size-1);

// iterates over the rows and looks at the 
	while ((row >= 0)||(win==0)){
		col = (size-1);
    		total = 0;
		for (col = (size-1); col>=0;col--){
			total = (total + matrix[row][col]);
    		}
		win = winCheck(total,size,dimention);
		row--;
	}
	return win;
}
int verticalWin(int matrix[3][3],int size,int dimention){
// Variables for the horizontal win
        int row;
        int col;
        int win = 0;
        int total = 0;
        col = (size-1);
//Iterates over the rows and sees if the columns are the same number
        while ((col >= 0)||(win==0)){
            row = (size-1);
            total = 0;
            for (row = (size-1); row>=0;row--){
              total = total + matrix[row][col];
            }
            win = winCheck(total,size,dimention);
            col--;
       	}
        return win;
}
int winCheck(int total, int size,int dimention){
//Takes the total from the other win functions and divides it by the size, so the average will be either 19 11 or 0
	float win = 0;
	win = total/size;
	if (win == 19){
		return 1;
	}
	else if (win == 11){
		return 2;
	}	 
	else{
		return 0;
	}
}

int main(){
	int mat1[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
	int mat2[3][3] = {{0,0,11},{0,11,0},{11,0,0}};
	int mat3[3][3] = {{0,0,0},{0,0,0},{11,11,11}};
	int mat4[3][3] = {{11,0,0},{11,0,0},{11,0,0}};

	printf("%d\n",diagonalWin(mat2,3,1));
	printf("%d\n",horizontalWin(mat3,3,1));
	printf("%d\n",verticalWin(mat4,3,1));
	return 0;
}
