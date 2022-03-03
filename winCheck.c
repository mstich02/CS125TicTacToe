
#include <stdio.h>
// x is 19 o is 11
//We used a prime number to calculate a win condition
int diagonalWin(int matrix[3][3],int size,int dimention){
	int count;
	int count2;
	int horizontalLR = 0;
	int horizontalRL = 0;
	int win1;
	int win2;
	for(count = dimention;count > 0;count--){
		for (count = (size-1); count>=0;count--){
			horizontalLR = horizontalLR + matrix[count][count];  
		} 
		for (count = (size-1); count>=0;count--){
			horizontalRL = horizontalRL + matrix[count][(size-(count+1))];
		}	
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
	int row;
	int col;
	int count;
	int win = 0; 
	int total = 0;
	row = (size-1);
	for(count = dimention; count > 0; count--){
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
}
int verticalWin(int matrix[3][3],int size,int dimention){
        int row;
        int col;
        int win = 0;
        int total = 0;
        col = (size-1);
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
