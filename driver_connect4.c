#include <stdio.h>
#include "connect4_engine.h"

int main(int argc, char *argv[]) {
	if(argc > 3){
		printf("Too many arguments\n");
		return 0;
	}
	if(argc < 3){
		printf("Input size and length to win\n");
		return 0;
	}
	size = atoi(argv[1]);
	win = atoi(argv[2]);	
	int board[size][size];
	initialize(size, size, board);
	printBoard(size, size, board);
	bool player1 = false;
	bool player2 = false;
	bool colError = false;
	bool fullCol = false;
	while(won == false){
		int column;
		if(currPlayer == 1){
			printf("Player 1: ");
			scanf("%d", &column);
			if(column > size){
				colError = true;
			}
			else{
				if(place_token(1, column, size, size, board) == 0){
					currPlayer = 1;
					fullCol = true;
				}
				else{
					if(winner(size, size, win, board) == 1){
						player1 = true;
					}
					else{
						currPlayer = 2;
					}
				}
			}
		}
		else{
			printf("Player 2: ");
			scanf("%d", &column);
			if(column > size){
				colError = true;
			}
			else{
				if(place_token(2, column, size, size, board) == 0){
					fullCol = true;
					currPlayer = 2;
				}
				else{
					if(winner(size, size, win, board) == 2){
						player2 = true;
					}
					else{
						currPlayer = 1;
					}
				}
			}
		}
		printBoard(size, size, board);
		if(player1 == true){
			printf("Player 1 Won!\n");
		}
		if(player2 == true){
			printf("Player 2 Won!\n");
		}
		if(colError == true){
			printf("Error: Column does not exist\n");
			colError = false;
		}
		if(fullCol == true){
			printf("Error: Column has no open slots!\n");
			fullCol = false;
		}
	}
}