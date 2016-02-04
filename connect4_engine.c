#include <stdio.h>
#include "connect4_engine.h"

int size;
int win;
int player1 = 1;
int player2 = 2;
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
	for(int i = 0; i <size; i++){
		for(int f = 0; f <size; f++){
			printf("%d\t",board[i][f]);
		}
		printf("\n");
	}
	printf("Amount to win: %d", win);
}
/******************************************************************
Check if a player has won
******************************************************************/
int winner(int num_rows, int num_columns, int length_to_win, int array[num_rows][num_columns]){
	return 0;
}
/******************************************************************
Function to place a token in a column
******************************************************************/
int place_token(int player, int column, int num_rows, int num_columns, int board[num_rows][num_columns]){
	return 0;
}

//int main(int argc, char *argv[]) {
//	setBoard();	
//	int board[size][size];
//	initialize(size, size, board);
//	printBoard(size, size, board);
//}
	