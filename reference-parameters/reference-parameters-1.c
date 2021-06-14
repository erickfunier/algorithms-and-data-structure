/**
   Sample program passing a few variables by reference
   Read an array of numbers until receive -1, or reach
   the maximum array size 100 numbers.

   @author Erick Santos

**/

#include <stdio.h>	// Used to get in/ out data

// function used to make statistics all input variables is pointers
void statistics(double *numberList, int *amount, double *min, double *max, double *average, double *sum) {
	if (*amount > 0) {
		*min = numberList[0];
		*max = numberList[0];
	}

	for (int i = 0; i < *amount; i++) {
		// check and store maximum value
		if (numberList[i] > *max) {
			*max = numberList[i];
		}

		// check and store minimum value
		if (numberList[i] < *min) {
			*min = numberList[i];
		}
		*average += numberList[i];
		*sum += numberList[i];
	}
	// make average
	*average /= *amount;
}

int main() {
	double numbers[101], min = 0, max = 0, average = 0, sum = 0;

	int i = 0;
	// loop to read all numbers until read -1
	while (i < 101) {
		scanf("%lf", &numbers[i]);
		printf("N%d: %f\n", i, numbers[i]); // used to list numbers
		if (numbers[i] == -1) {
			break;
		}
		i++;
	}

	// call statistics passing parameters as reference
	statistics(numbers, &i, &min, &max, &average, &sum);

	printf("Minimun: %f\n", min);
	printf("Maximum: %f\n", max);
	printf("Average: %f\n", average);
	printf("Sum: %f\n", sum);

	return 0;
}