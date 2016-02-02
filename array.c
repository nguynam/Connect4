#include <stdio.h>

int main(int argc, char *argv[]) {
	int a[10][10];
	//int count = 0;
	for(int i = 0; i <10; i++){
		for(int f = 0; f <10; f++){
			a[i][f] = 0;
			//count++;
			//printf("%d\t",a[i][f]);
		}
		//printf("\n");
	}
	a[9][0] = 1;
	a[8][0] = 2; 
	a[9][9] = 3;
	for(int i = 0; i <10; i++){
		for(int f = 0; f <10; f++){
			//a[i][f] = 0;
			//count++;
			printf("%d\t",a[i][f]);
		}
		printf("\n");
	}
}