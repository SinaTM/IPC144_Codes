#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
	// declare a variable ch1 without initializing it
	char ch1;

	// prompting the user:
	printf("Please input a character: ");

	/* Use the scanf function to read a single character from the user's input
	   store it in the 'ch1' variable */
	scanf(" %c", &ch1);

	// print a message along with the value of 'ch1'
	printf("You have entered character -> %c\n", ch1);

	return 0;

}