#include <stdio.h>

int size;
int win;
int board[10][10];
int player1 = 1;
int player2 = 2;

//Initialize the array
void initialize(int num_rows, int num_cols, int array[size][size]){
	for (int r = 0; r < num_rows; r++) {
		for (int c = 0; c < num_cols; c++) {
			array[r][c] = 0;
		}
	}
}
//User input size and length to win
void setBoard(){
	printf("Enter the desired size of the board: ");
	scanf("%d", &size);
	printf("Enter amount needed to win: ");
	scanf("%d", &win);
	int board[size][size];
	initialize(size, size, board);
	for(int i = 0; i <size; i++){
		for(int f = 0; f <size; f++){
			
			printf("%d\t",board[i][f]);
		}
		printf("\n");
	}
}
//Check if there is a winner
int winner(int num_rows, int num_columns, int length_to_win, int array[num_rows][num_columns]){
	
}
//Place token in the given column
int place_token(int player, int column, int num_rows, int num_columns, int board[num_rows][num_columns]){
	
}

int main(int argc, char *argv[]) {
	setBoard();	
}
	