/**
	Sample program to read a N x N matrix, and check if
	is diagonally dominant
	@author Erick Santos

	If you want to insert this matrix:
	| 4  1  8  1 |
	| 5  2  4  6 |
	| 10 7  6  9 |
	| 2  8  3  2 |

	Follow this input (the first line is the size of array):
	4
	4 1 8 1 5 2 4 6 10 7 6 9 2 8 3 2

	The output will be as follows:
	NO

**/

#include <stdio.h>  // Used to get in/ out data
#include <stdlib.h>  // Used to get the absolute value

int isDiagonallyDominant(int *mtx, int size) {
	int line = 0;

	// Transverse all columns
	for (int i = 0; i < size; i++) {
		line = 0;
		// Sum all lines for the current column
		for (int j = 0; j < size; j++) {
			line += abs(*((mtx+i*size)+j));
		}
		// Subtract the lines with same column index, cause i must be different than j
		line -= *((mtx+i*size)+i);

		// check if a[i][i] is less than sum of line
		if (abs(*((mtx+i*size)+i)) < line) {
			return 0;
		}
	}
	return 1;
}

void readMatrix(int *mtx, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			scanf("%d", ((mtx+i*size)+j));
		}
	}
}

int main(){
	int size;

	// get the size of matrix
	scanf("%d", &size);

	// define matrix
	int mtx[size][size];

	readMatrix((int *)mtx, size);

	if(isDiagonallyDominant((int *)mtx, size)) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}

	return 0;
}
