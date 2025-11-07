#include<stdio.h>

int main() {

	char sentence[100]; //holds the sentence
	char ch; //reads in one character at a time
	int i = 0; //runs the loop

	bool letters[26]; //set up another array to hold the alphebet, set each slot to false
	for (int i = 0; i < 26; i++)
		letters[i] = false;

	//GET USER INPUT---------------------------------------------------
	do {
		ch = getchar(); //get a character
		sentence[i] = ch; //push character into the array
		i++;
	} while (ch != '\n' && i < 99);

	//MARK WHICH LETTERS EXIST------------------------------------------
	i = 0;
	while (i < 99 && sentence[i] != '\n') {
		//putchar(sentence[i]);
		letters[sentence[i] - 97] = true; //if "a" is in there, set it's slot to true, etc
		i++;
	}
	//CHECK IF ALL THE LETTERS ARE THERE--------------------------------
	bool pangram = true; //assume it's a pangram, change if you encounter a false array value
	for (int i = 0; i < 26; i++) {
		printf("%d", letters[i]); // print array for testing
		if (letters[i] == 0)
			pangram = false;
	}
	//PRINT OUT RESPONSE------------------------------------------------
	if (pangram == true)
		printf("you've been panagrammed nerd!");
	else
		printf("not a pangram");
}
