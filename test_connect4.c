#include <stdio.h>
#include "connect4_engine.h"

int main(int argc, char *argv[]) {
	setBoard();	
	int board[size][size];
	initialize(size, size, board);
	printBoard(size, size, board);
	while(won == false){
		int column;
		if(currPlayer == 1){
			printf("Player 1: ");
			scanf("%d", &column);
			if(column > size){
				printf("Column exceeds size of the board");
			}
			else{
				place_token(1, column, size, size, board);
				currPlayer = 2;
			}
		}
		else{
			printf("Player 2: ");
			scanf("%d", &column);
			if(column > size){
				printf("Column exceeds size of the board");
			}
			else{
				place_token(2, column, size, size, board);
				currPlayer = 1;
			}
		}
		for(int i = 0; i < 30; i++){
			printf("\n");
		}
		printBoard(size, size, board);
	}
}