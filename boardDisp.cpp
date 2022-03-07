#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int rowput;
int colput;

char row1[3] = { ' ',' ',' ' };
char row2[3] = { ' ',' ',' ' };
char row3[3] = { ' ',' ',' ' };
int col;
int validCheck = 0;



int turntime;

int main()
{
printf(" 1     2    3\n");
printf("\n");
printf("1 %c  | %c | %c\n", row1[0], row1[1], row1[2]);
printf("  -----------\n");
printf("2 %c  | %c | %c\n", row2[0], row2[1], row2[2]);
printf("  -----------\n");
printf("3 %c  | %c | %c\n", row3[0], row3[1], row3[2]);
for (turntime = 0; turntime < 9; turntime++)
{

	if (turntime % 2 == 0)
	{
		validCheck = 0;
		printf("It is X's turn\n");
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
			row1[colput - 1] = 'x';
		}
		else if (rowput == 2)
		{
			row2[colput - 1] = 'x';
		}
		else if (rowput == 3)
		{
			row3[colput - 1] = 'x';
		}
		else printf("INVALID INPUT");
	}
	else if (turntime % 2 != 0)
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
			}
			else if (rowput == 2)
			{
				row2[colput - 1] = 'y';
			}
			else if (rowput == 3)
			{
				row3[colput - 1] = 'y';
			}
			else printf("INVALID INPUT");
	}
	printf(" 1     2    3\n");
	printf("\n");
	printf("1 %c  | %c | %c\n", row1[0], row1[1], row1[2]);
	printf("  -----------\n");
	printf("2 %c  | %c | %c\n", row2[0], row2[1], row2[2]);
	printf("  -----------\n");
	printf("3 %c  | %c | %c\n", row3[0], row3[1], row3[2]);
	}
}