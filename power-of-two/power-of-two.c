/***
 *
 *  Author: Erick Santos
 *	Sample program to read a N integer array and return the number of
 *  numbers that are power of 2
 *
 *  Follow this input (the first line is the size of array):
 *	10
 *	1 -5 20 799 4 3 -2 -10000 54 28 10
 *
***/


#include <stdio.h> // Used to get in/ out data

// IsPowerOfTwo function, return 1 if number is power of two, or 0 if not.
// If number is less than 0, return 0,	else while number is greater than 0,
// check if the remainder of division by two is different than 0, then return 0.
// Otherwise divide number by two and continue while loop. When the while loop
// end, the number is a power of two.
int IsPowerOfTwo(int num) {
	if (num < 1) return 0;

	while (num > 1) {
		if (num % 2 != 0)
			return 0;
		num = num / 2;
	}

	return 1;
}

int main() {

	// Used to define the size of array
	int n;

	// read the size n of vector
	scanf("%d", &n);

	int vector[n];

	for (int i = 0;	i < n; i++) {
		// read n numbers and insert on int array position
		scanf("%d", &vector[i]);
	}

	// Counter used to account power2 numbers
	int count = 0;
	for (int i = 0;	i < n; i++) {
		// Counts numbers that are power of 2
		if (IsPowerOfTwo(vector[i])) {
			count++;
		}
	}

	// Print the counter
	printf("%d\n", count);

	return 0;
}