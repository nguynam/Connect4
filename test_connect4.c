#include <stdio.h>
#include "connect4_engine.h"

int main(int argc, char *argv[]) {
	setBoard();	
	int board[size][size];
	initialize(size, size, board);
	printBoard(size, size, board);
	place_token(1,2,size,size,board);
	place_token(1,2,size,size,board);
    printf("\n");
	printBoard(size, size, board);
}