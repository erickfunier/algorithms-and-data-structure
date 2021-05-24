/**
   Sample program to read a N positive integer and check if the number is
   triangular.
   @author Erick Santos

**/

#include <stdio.h>  // Used to get in/ out data

int isTriangular(int n) {

	// To check if the number is triangular we need to calculate
	// the followed equation (i(i+1))/2 if the number is equal
	// to N then N is triangular

	if (n == 0)
		return 1;

	for (int i = 1; i <= n; i++) {
		int equation = (i*(i+1))/2;
		if (equation == n) {
			return 1;
		}
	}
	return 0;
}

int main() {
	// define the N number
	unsigned int n;

	// read N number
	scanf("%d", &n);

	if (isTriangular(n)) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	return 0;
}