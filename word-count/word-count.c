/**
   Sample program to read a phrase and count the number of words
   The phrase must to be a maximum of 100 characters
   @author Erick Santos

   Input example:
 	Hi this is a word counter, this phrase have 11 words.

   Output:
	11
**/

#include <stdio.h> // Used to get in/ out data

// function used to count words with a loop with maximum 100 iterations
// or if reach \0 char as end of line, then return the counter
int countWords(char *phrase) {
	int count = 0;
	for (int i = 0; i < 100; i++) {
	  // check if have a space character, as a end of word
      if (phrase[i] == ' '){
		  count++;

	  }
	  // check if have a \0 end of phrase or null character on array
	  else if (phrase[i] == '\0') {
	  	  count++;
	  	  return count;
	  }
   	}
}

int main(){
	char phrase[101];

	fgets(phrase, 100, stdin); // read the word and store in phrase variable

	printf("%d\n", countWords(phrase)); // print the number of words

	return 0;
}