#include <stdio.h>

extern int size;
extern int win;
extern int player1;
extern int player2;

void setBoard();

void initialize(int num_rows, int num_cols, int array[size][size]);

void printBoard(int num_rows, int num_columns, int board[num_rows][num_columns]);

int winner(int num_rows, int num_columns, int length_to_win, int array[num_rows][num_columns]);

int place_token(int player, int column, int num_rows, int num_columns, int board[num_rows][num_columns]);

