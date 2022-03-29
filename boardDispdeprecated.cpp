#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "ticTacToe.h" //Header caller
#include <windows.h>

int rowput; //row input
int colput; //column input

char row1[3] = { ' ',' ',' ' };           //-------------------------------//
char row2[3] = { ' ',' ',' ' };			 // Setup the board in a 3x3 grid //
char row3[3] = { ' ',' ',' ' };			//                               //
int col;							   //-------------------------------//
int matrix[3][3] = { {' ',' ',' '},{' ',' ',' '},{' ',' ',' '} };
int validCheck = 0;

int winconh;  //Horizontal wincon
int winconv;  //Vertical wincon
int wincond;  //Diagonal wincon
int wincon;   //Wincon checker
int turntime; //Turn looper

void winSong() //this is the result of me being bored during spring break
{
	//Timings
	float quarter = 550;
	float half = 2 * quarter;
	float triplet = quarter / 3;
	float whole = quarter * 4;
	float eight = quarter / 2;
	float sixteenth = quarter / 4;
	//Scale
	float C4 = 261.63;
	float D4 = 293.67;
	float E4 = 329.63;
	float F4 = 349.23;
	float G4 = 392.00;
	float A4 = 444.00;
	float B4 = 493.88;
	float C5 = 523.25;
	float D5 = 587.33;
	float E5 = 659.26;
	float F5 = 698.46;
	float G5 = 783.99;
	float A5 = 880.00;
	float B5 = 987.77;
	float C6 = 1046.5;
	float D6 = 1174.7;
	float E6 = 1318.5;
	// Driver Code
	int rep;
	//Uncomment for pain
	//Beep(15000, 5000);
	for (rep = 0; rep < 2; rep++)
	{
		Beep(F5, quarter);
		Sleep(50);
		Beep(G5, quarter);
		Sleep(50);
		Beep(C5, quarter);
		Sleep(50);
		Beep(G5, quarter);
		Sleep(50);
		Beep(A5, quarter);
		Sleep(50);
		Beep(C6, triplet);
		Beep(B5, triplet);
		Beep(A5, triplet);
		Sleep(50);
		Beep(F5, quarter);
		Sleep(50);
		Beep(G5, quarter);
		Sleep(50);
		Beep(C5, half);
		Sleep(50 + quarter);
		Beep(C5, quarter / 2);
		Beep(C5, quarter / 2);
		Sleep(50);
		Beep(D5, triplet);
		Beep(F5, triplet);
		Beep(F5, triplet);
		Sleep(50);
	}
	Sleep(quarter);
	Beep(D5, quarter / 2);
	Beep(E5, quarter / 2);
	Sleep(50);
	Beep(F5, sixteenth);
	Beep(F5, sixteenth);
	Beep(G5, sixteenth);
	Beep(E5, sixteenth + triplet);
	Beep(D5, triplet);
	Beep(C5, triplet + half);
	Sleep(50 + quarter + eight);
	Beep(D5, triplet);
	Beep(D5, triplet);
	Beep(E5, triplet);
	Sleep(50);
	Beep(F5, eight);
	Beep(D5, quarter);
	Sleep(50);
	Beep(C5, eight);
	Sleep(50);
	Beep(C6, eight);
	Sleep(eight);
	Beep(C6, eight);
	Sleep(eight);
	Beep(G5, quarter);
	Sleep(eight);
	Beep(D5, sixteenth);
	Beep(D5, sixteenth);
	Beep(E5, sixteenth);
	Beep(F5, sixteenth);
	Sleep(50);
	Beep(D5, eight);
	Beep(F5, eight);
	Beep(G5, eight);
	Sleep(quarter);
	Beep(E5, eight);
	Beep(D5, eight);
	Beep(C5, half);
	Sleep(quarter + eight);

}

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
					if (row1[colput - 1] == 'x') //Spot validity checker
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

		winconh = horizontalWin(matrix, 3, 1);
		winconv = verticalWin(matrix, 3, 1);
		wincond = diagonalWin(matrix, 3, 1);
		if (turntime == 8)
		{
			printf("TIE!");
		}

		else
		{
			if (winconh != 0)
			{
				if (turntime % 2 == 0)
				{
					printf("X wins!");
				}
				else
				{
					printf("Y Wins!");
				}
				turntime = 9;
			}
			else if (winconv != 0)
			{
				if (turntime % 2 == 0)
				{
					printf("X wins!");
				}
				else
				{
					printf("Y Wins!");
				}
				turntime = 9;
			}
			else if (wincond != 0)
			{
				if (turntime % 2 == 0)
				{
					printf("X wins!");
				}
				else
				{
					printf("Y Wins!");
				}
				turntime = 9;
			}
		}
	}
	winSong();
	return 0;
}

