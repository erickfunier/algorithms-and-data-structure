/**
   Sample program to read a N integer and insert in a ordered array until
   receive -1, or reach the maximum array size 100 numbers.
   @author Erick Santos

**/

#include <stdio.h>

// Find the position traversing the array from end to start
// checking if current i poisition is greather than new number
// if not, still traversing doing a shift with the current i index
// to i+1 index, then when find the number less than new number
// the posiiton is ready to receive the new number
int insertOrdered(int arr[], int n, int newNum) {
	int pos = n;
	for (int i = n-1; i >= 0 && arr[i] > newNum; i--) {
		arr[i+1] = arr[i];
		pos--;
	}
	arr[pos] = newNum;
}

void printArray(int arr[], int n) {
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main() {

	// array used to store the n integer number
	int arr[101];

	// used to count if reach maximum size and pass to
	// insert function the current index.
	int i = 0;

	// used to store temporary number inserted by user
	int value;

	// read the number from user input
	scanf("%d", &value);

	// loop until array reach the maximum index, or user insert the value -1
	while (value != -1 && i < 100) {
		insertOrdered(arr, i, value);
		printArray(arr, ++i);

		// read next number from user input
		scanf("%d", &value);
	}

	return 0;
}