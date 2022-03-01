#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

char playagain;						//|**********************|//
int whosTurn;						//|Game Related Variables|//
									//|**********************|//

int row;							//|------------------|//
int col;							//| Board state vars |//
int board_size;						//|------------------|//

int loopy = 1;						//|*********|//
int size_check = 1;					//|Loop vars|//
int game_runner =1 ;				//|*********|//

 


int main()
{
	while (loopy == 1)
	{
		printf("Would you like to play tic-tac-toe? (y/n) ");
		scanf("%c", &playagain);
		

		if (playagain == 121)
		{
			
			//Board size setup, allowing for larger boards
			while (size_check == 1)
			{
				printf("what size square would you like?");
				scanf("%d", &board_size);

				if (board_size < 3)
				{
					printf("invalid board size\n");
				}
				else
				{
					size_check = 0;
				}
			}
			//while (game_runner == 1)
			//{
			//	//Game runner func here()
			//	//Win checker fun here(Current Board state pass)
			//	// if statement to exit game runner and loopy on the basis of a win condition
			//}
			loopy = 0;
		}
		else
		{
			loopy = 0;
		}
	}
}