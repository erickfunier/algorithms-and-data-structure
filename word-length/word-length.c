/**
   Sample program to a text and get the length of longest word
   The maximum text length is 100 characters
   @author Erick Santos

**/

#include <stdio.h>   // Used to get in/ out data
#include <stdlib.h>
#include <string.h>

int lengthOfLongestWord(char text[]) {
	int numOfWords = 0, index = 0, temp = 0;

    // Count the number of words in text
    for (int i = 0; i < 100; i++) {
		if (text[i] == ' ') { // check if the current char ia a space and sum de words counter
			numOfWords++;
		} else if (text[i] == '\0') { // if end of string end the counter
			break;
		}
	}
	numOfWords++;

    // define the array of word size (each index contains the word indexed size)
	int wordsSize[numOfWords];

	for (int j = 0; j < numOfWords; j++) {
		for (int i = index; i < 100; i++) {
			if (text[i] < 65) { // if char is less than 65 in ASCII table, then is a symbol, not a letter
				index = i;
				break;
			}
		}

		wordsSize[j] = index - temp; // get the length of current word and store in your index
		index += 1;
		temp = index;
	}

    // get longest word
	int longest = 0;
	for (int i = 0; i < numOfWords; i++) {
		if (wordsSize[i] > longest) {
			longest = wordsSize[i];
		}
	}

	return longest;
}


int main() {

    // array used to store the text
	char text[101];
	fgets(text, 101, stdin);

	printf("%d\n", lengthOfLongestWord(text));

	return 0;
}