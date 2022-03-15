// x is 19 o is 11

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int row1num[3] = { ' ',' ',' ' };
int row2num[3] = { ' ',' ',' ' };
int row3num[3] = { ' ',' ',' ' };
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
				row1num[colin - 1] = 19;
			}
			else if (rowin == 2)
			{
				row2num[colin - 1] = 19;
			}
			else if (rowin == 3)
			{
				row3num[colin - 1] = 19;
			}
			else printf("INVALID INPUT");
		}

		else if (turntime % 2 != 0)
		{

			if (rowin == 1)
			{
				row1num[colin - 1] = 11;
			}
			else if (rowin == 2)
			{
				row2num[colin - 1] = 11;
			}
			else if (rowin == 3)
			{
				row3num[colin - 1] = 11;
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
