/*
 -------------------------------------------------------
 Project: a1q1
 File:    a1q1.c
 -------------------------------------------------------
 Author:  Thomas Serdioukov
 ID:      140120470
 Email:   serd0470@mylaurier.ca
 Version:
 -------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	// the following two lines are for Eclipse console un-buffered output
	//setvbuf(stdout, NULL, _IONBF, 0);
	//setvbuf(stderr, NULL, _IONBF, 0);

	char c = ' ';
	printf("Please enter a character: ");
	c = getchar();

	while (c != '*') {


		if (c >= 'a' && c <= 'z')
			printf("%c %d %c\n", c, c, c - 32);
		else if (c >= 'A' && c <= 'Z')
			printf("%c %d %c\n", c + 32, c, c);
		else
			printf("Invalid input\n");

		while (getchar() != '\n') ;
		printf("Please enter a character: ");
		c = getchar();
	}

	printf("Good bye\n");
	return 0;
}
