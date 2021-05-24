/**
	Sample program to read a N x N matrix, and check if
	is with followed format:
	| 0  1  0  0 |
	| 0  0  1  0 |
	| 1  0  0  0 |
	| 0  0  0  1 |

	Each line and each column have n-1 null items and a item
	equal 1.

	@author Erick Santos

	If you want to insert this matrix:
	| 1  0  0  0 |
	| 0  0  0  1 |
	| 0  1  0  0 |
	| 0  0  1  0 |

	Follow this input (the first line is the size of array):
	4
	1 0 0 0 0 0 0 1 0 1 0 0 0 0 1 0

	The output will be as follows:
	YES

**/

#include <stdio.h> // Used to get in/ out data

int checkMatrix(int n, int mtx[n][n]) {
	// transverse all matrix sum each line elements to
	// check if is greater than 1, if not the line have
	// just one element with 1
	for (int i = 0; i < n; i++)	{
		int line = 0;
		for (int j = 0; j < n; j++) {
			line += mtx[i][j];
		}

		if (line > 1 || line == 0) {
			return 0;
		}
	}
	return 1;
}


int main() {

	// define matrix size
	int n;

	// get matrix size
	scanf("%d", &n);

	// define matrix
	int mtx[n][n];

	// read all matrix from user input
	for (int line = 0; line < n; line++)
		for (int column = 0; column < n; column++)
			scanf("%d", &mtx[line][column]);

	if (checkMatrix(n, mtx))
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}