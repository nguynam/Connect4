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
				printf("Error: Column does not exist");
			}
			else{
				if(place_token(1, column, size, size, board) == 0){
					currPlayer = 1;
				}
				else{
					currPlayer = 2;
				}
			}
		}
		else{
			printf("Player 2: ");
			scanf("%d", &column);
			if(column > size){
				printf("Error: Column does not exist");
			}
			else{
				if(place_token(2, column, size, size, board) == 0){
					currPlayer = 2;
				}
				else{
					currPlayer = 1;
				}
			}
		}
		for(int i = 0; i < 25; i++){
			printf("\n");
		}
		printBoard(size, size, board);
	}
}