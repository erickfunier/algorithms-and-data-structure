/**
	Sample program to read a N x N matrix, considering N is pair
	and print the folded matrix, after two fold.
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
	4 1 8 1
	5 2 4 6
	10 7 6 9
	2 8 3 2

	5 9
	11 6
	19 13
	4 11

	9 20
	30 19

**/

#include <stdio.h>  // Used to get in/ out data

void readMatrix(int *mtx, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			scanf("%d", ((mtx+i*size)+j));
		}
	}
}

void printMatrix(int *mtx, int sizeN, int sizeM) {
	for (int j = 0; j < sizeN; j++) {
		for (int k = 0; k < sizeM; k++) {
			// The matrix is accessed with pointer arithmetic,
			// need do a shift in pointer with For execution
			printf("%d ", *((mtx+j*sizeM)+k));
		}
		printf("\n");
	}
	printf("\n");
}

void foldMatrix(int *mtx, int size, int foldTimes) {
	// define first folded matrix with half height
	int mtx_dobra1[size][foldTimes];

	for (int j = 0; j < size; j++) {
		for (int k = 0; k < foldTimes; k++) {
			mtx_dobra1[j][k] = *((mtx+j*size)+k) + *((mtx+j*size)+size-k-1);
		}
	}

	printMatrix((int *)mtx_dobra1, size, foldTimes);

	// define second folded matrix with half height and half length
	int mtx_dobra2[foldTimes][foldTimes];

	for (int j = 0; j < foldTimes; j++) {
		for (int k = 0; k < foldTimes; k++) {
			mtx_dobra2[j][k] = mtx_dobra1[j][k] + mtx_dobra1[size-j-1][k];
		}
	}

	printMatrix((int *)mtx_dobra2, foldTimes, foldTimes);
}

int main(){
	int size;

	// get the size of matrix
	scanf("%d", &size);

	// define first matrix
	int mtx[size][size];

	readMatrix((int *)mtx, size);
	printMatrix((int *)mtx, size, size);

	// set fold times with half of matrix size
	int foldTimes = size/2;

	foldMatrix((int *)mtx, size, foldTimes);

	return 0;
}
