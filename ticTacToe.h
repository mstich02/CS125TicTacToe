#pragma once

typedef struct returnPosition {
	int row;
	int col;
}mat;

int diagonalWin(int matrix[3][3], int size, int dimention);
int horizontalWin(int matrix[3][3], int size, int dimention);
int verticalWin(int matrix[3][3], int size, int dimention);

int gameModeStart();
mat easyMode(int matrix[3][3], int size, int dimention);

