#include <stdio.h>
#include "connect4_engine.h"
#include <stdbool.h>

int size;
int win;
int currPlayer = 1;
int currCol;
int currRow;
bool won = false;
/******************************************************************
Asks user for input for size of board and length to win
******************************************************************/
void setBoard(){
	printf("Enter the desired size of the board: ");
	scanf("%d", &size);
	printf("Enter amount needed to win: ");
	scanf("%d", &win);
}
/******************************************************************
Initialize an empty array
******************************************************************/
void initialize(int num_rows, int num_cols, int array[size][size]){
	for (int i = 0; i < num_rows; i++) {
		for (int j = 0; j < num_cols; j++) {
			array[i][j] = 0;
		}
	}
}
/******************************************************************
Print the current game board
******************************************************************/
void printBoard(int num_rows, int num_columns, int board[num_rows][num_columns]){
	//Print column numbers
	for(int i = 1; i <= size; i++){
		printf("%d\t", i);
	}
	printf("\n");
	for(int i = 1; i <= size; i++){
		printf("-\t");
	}
	printf("\n");
	//Print board
	for(int i = 0; i < size; i++){
		for(int f = 0; f < size; f++){
			printf("%d\t",board[i][f]);
		}
		printf("\n");
	}
}
/******************************************************************
Check if a player has won
******************************************************************/
int winner(int num_rows, int num_columns, int length_to_win, int array[num_rows][num_columns]){
	//Check Vertical
	int count1 = 0;
	int count2 = 0;
	for(int i = 0; i < size; i++){
		count1 = 0;
		count2 = 0;
		for(int j = size - 1; j >=0; j--){
			if(array[j][i] == 1){
				count1++;
				count2 = 0;
				if(count1 == length_to_win){
					won = true;
					return 1;
				}
			}
			if(array[j][i] == 2){
				count2++;
				count1 = 0;
				if(count2 == length_to_win){
					won = true;
					return 2;
				}
			}
		}
	}
	//Check Horizontal
	for(int i = size-1; i >= 0; i--){
		count1 = 0;
		count2 = 0;
		for(int j = 0; j < size; j++){
			if(array[i][j] == 1){
				count1++;
				count2 = 0;
				if(count1 == length_to_win){
					won = true;
					return 1; 
				}
			}
			else{
				count1 = 0;
			}
			if(array[i][j] == 2){
				count2++;
				count1 = 0;
				if(count2 == length_to_win){
					won = true;
					return 2;
				}
			}
			else{
				count2 = 0;
			}
		}
	}
	//Check Backward Diagnol
	count1 = 0;
	count2 = 0;
	int thisCurrCol = currCol;
	int thisCurrRow = currRow;
	while(thisCurrCol > 0 || thisCurrRow < size - 1){
		if(thisCurrRow == size - 1){
			break;
		}
		else{
			thisCurrCol--;
			thisCurrRow++;
		}
	}
	while(thisCurrCol < size -1 || thisCurrRow >= 0){
		if(array[thisCurrRow][thisCurrCol] == 1){
			count1++;
			count2 = 0;
			if(count1 == length_to_win){
				won = true;
				return 1; 
			}
		}
		else{
			count1 = 0;
		}
		if(array[thisCurrRow][thisCurrCol] == 2){
			count2++;
			count1 = 0;
			if(count2 == length_to_win){
				won = true;
				return 2; 
			}
		}
		else{
			count2 = 0;
		}
		thisCurrCol++;
		thisCurrRow--;
	}
	//Check Forward Diagnol
	count1 = 0;
	count2 = 0;
	while(currCol < size - 1 || currRow < size - 1){
		if(currRow == size - 1){
			break;
		}
		else{
			currCol++;
			currRow++;
		}
	}
	while(currCol >= 0 || currRow >= 0){
		if(array[currRow][currCol] == 1){
			count1++;
			count2 = 0;
			if(count1 == length_to_win){
				won = true;
				return 1; 
			}
		}
		else{
			count1 = 0;
		}
		if(array[currRow][currCol] == 2){
			count2++;
			count1 = 0;
			if(count2 == length_to_win){
				won = true;
				return 2; 
			}
		}
		else{
			count2 = 0;
		}
		currCol--;
		currRow--;
	}
	return 0;
}
/******************************************************************
Function to place a token in a column
******************************************************************/
int place_token(int player, int column, int num_rows, int num_columns, int board[num_rows][num_columns]){
	currCol = column - 1;
	for(int i = size-1; i >= 0; i--){
		if(board[i][column-1] == 0){
			board[i][column-1] = player;
			currRow = i;
			return 1;
		}
	}
	return 0;
}
	