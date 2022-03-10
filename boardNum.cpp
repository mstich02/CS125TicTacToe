// x is 19 o is 11

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include "ticTacToe.h"

int matrix[3][3]= {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
int col;
int validCheck = 0;



int turntime;

void boardState(int rowin, int colin)
{

	for (turntime = 0; turntime < 9; turntime++)
	{

		if (turntime % 2 == 0)
		{
			if (rowin == 1)
			{
				matrix[0][colin - 1] = 19;
			}
			else if (rowin == 2)
			{
				matrix[1][colin - 1] = 19;
			}
			else if (rowin == 3)
			{
				matrix[2][colin - 1] = 19;
			}
			else printf("INVALID INPUT");
		}

		else if (turntime % 2 != 0)
		{

			if (rowin == 1)
			{
				matrix[0][colin - 1] = 11;
			}
			else if (rowin == 2)
			{
				matrix[1][colin - 1] = 11;
			}
			else if (rowin == 3)
			{
				matrix[2][colin - 1] = 11;
			}
			else printf("INVALID INPUT");
		}
	}
}
int main(int rowin, int colin)
{
	boardState(rowin, colin);
	return 0;
}