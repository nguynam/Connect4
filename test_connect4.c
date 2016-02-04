#include <stdio.h>
#include "connect4_engine.h"

int main(int argc, char *argv[]) {
	setBoard();	
	int board[size][size];
	initialize(size, size, board);
	printBoard(size, size, board);
}