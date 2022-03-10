#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "ticTacToe.h"

int rowput;
int colput;
											
char row1[3] = { ' ',' ',' ' };           //-------------------------------//
char row2[3] = { ' ',' ',' ' };			 // Setup the board in a 3x3 grid //
char row3[3] = { ' ',' ',' ' };			//                               //
int col;							   //-------------------------------//
int matrix[3][3] = { {' ',' ',' '},{' ',' ',' '},{' ',' ',' '} };
int validCheck = 0;



int turntime;

int main()
{
printf("COL> 1   2  3\n"); // Label the columns
printf("ROW v"); //Label the rows
printf("\n");
printf("  1 %c  | %c | %c\n", row1[0], row1[1], row1[2]);			 //--------------------------------//
printf("    -----------\n");										//                                //
printf("  2 %c  | %c | %c\n", row2[0], row2[1], row2[2]);		   // Represent the board with ASCII //
printf("    -----------\n");									  //                                //
printf("  3 %c  | %c | %c\n", row3[0], row3[1], row3[2]);		 //--------------------------------//
for (turntime = 0; turntime < 9; turntime++)
{

	if (turntime % 2 == 0) //check who's turn it is X or Y
	{
		validCheck = 0; //reset valid check
		printf("It is X's turn\n"); 
		while (validCheck == 0) //Check that the square is a valid choice to avoid overwriting
		{
			printf("which row would you like it in?: "); //Row input
			scanf("%d", &rowput);

			printf("which column would you like it in?: "); //Col input
			scanf("%d", &colput);

			if (rowput == 1) //Row 1 checker
			{
				if (row1[colput - 1] == 'x')
				{
					printf("Invalid spot, try again\n");
				}

				else if (row1[colput - 1] == 'y')
				{
					printf("Invalid spot, try again\n");
				}

				else
				{
					validCheck = 1;
				}
			}

			else if (rowput == 2) //Row 2 checker
			{
				if (row2[colput - 1] == 'x')
				{
					printf("Invalid spot, try again\n");
				}

				else if (row2[colput - 1] == 'y')
				{
					printf("Invalid spot, try again\n");
				}

				else
				{
					validCheck = 1;
				}
			}
			else if (rowput == 3) //Row 3 checker
			{
				if (row3[colput - 1] == 'x')
				{
					printf("Invalid spot, try again\n");
				}


				else if (row3[colput - 1] == 'y')
				{
					printf("Invalid spot, try again\n");
				}
				else
				{
					validCheck = 1;
				}
			}
			else
			{
				printf("Invalid row value");
			}

		}
		if (rowput == 1) //Input an x in the valid spots
		{
			row1[colput - 1] = 'x';
			matrix[0][colput - 1] = 19;
		}
		else if (rowput == 2)
		{
			row2[colput - 1] = 'x';
			matrix[1][colput - 1] = 19;
		}
		else if (rowput == 3)
		{
			row3[colput - 1] = 'x';
			matrix[2][colput - 1] = 19;
		}
		else printf("INVALID INPUT"); 
	}
	else if (turntime % 2 != 0) //Same thing but for Y
	{
		validCheck = 0;
		printf("It is Y's turn\n");
		while (validCheck == 0)
		{
			printf("which row would you like it in?: ");
			scanf("%d", &rowput);

			printf("which column would you like it in?: ");
			scanf("%d", &colput);

			if (rowput == 1)
			{
				if (row1[colput - 1] == 'x')
				{
					printf("Invalid spot, try again\n");
				}

				else if (row1[colput - 1] == 'y')
				{
					printf("Invalid spot, try again\n");
				}

				else
				{
					validCheck = 1;
				}
			}

			else if (rowput == 2)
			{
				if (row2[colput - 1] == 'x')
				{
					printf("Invalid spot, try again\n");
				}

				else if (row2[colput - 1] == 'y')
				{
					printf("Invalid spot, try again\n");
				}

				else
				{
					validCheck = 1;
				}
			}
			else if (rowput == 3)
			{
				if (row3[colput - 1] == 'x')
				{
					printf("Invalid spot, try again\n");
				}


				else if (row3[colput - 1] == 'y')
				{
					printf("Invalid spot, try again\n");
				}
				else
				{
					validCheck = 1;
				}
			}
			else
			{
				printf("Invalid row value");
			}

		}

			if (rowput == 1)
			{
				row1[colput - 1] = 'y';
				matrix[0][colput - 1] = 11;
			}
			else if (rowput == 2)
			{
				row2[colput - 1] = 'y';
				matrix[1][colput - 1] = 11;
			}
			else if (rowput == 3)
			{
				row3[colput - 1] = 'y';
				matrix[2][colput - 1] = 11;
			}
			else printf("INVALID INPUT");
	}
	printf("COL> 1   2  3\n"); //Print the current state of the board, go back to the top and swap turns
	printf("ROW v");
	printf("\n");
	printf("  1 %c  | %c | %c\n", row1[0], row1[1], row1[2]);
	printf("    -----------\n");
	printf("  2 %c  | %c | %c\n", row2[0], row2[1], row2[2]);
	printf("    -----------\n");
	printf("  3 %c  | %c | %c\n", row3[0], row3[1], row3[2]);

	horizontalWin(matrix, 3, 1);
	verticalWin(matrix, 3, 1);
	diagonalWin(matrix, 3, 1);
	}
}