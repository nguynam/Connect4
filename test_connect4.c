#include <stdio.h>
#include "connect4_engine.h"

int main(int argc, char *argv[]) {
	setBoard();	
	int board[size][size];
	initialize(size, size, board);
	printBoard(size, size, board);
	bool player1 = false;
	bool player2 = false;
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
					if(winner(size, size, win, board) == 1){
						player1 = true;
					}
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
					if(winner(size, size, win, board) == 2){
						player2 = true;
					}
					currPlayer = 1;
				}
			}
		}
		printBoard(size, size, board);
		if(player1 == true){
			printf("Player 1 Won!");
		}
		if(player2 == true){
			printf("Player 2 Won!");
		}
	}
}