 /*
 -------------------------------------------------------
 Project: a1q2
 File:    a1q2.c
 -------------------------------------------------------
 Author:  Thomas Serdioukov
 ID:      140120470
 Email:   serd0470@mylaurier.ca
 Version:
 -------------------------------------------------------
 */

#include <stdio.h>

int main(int argc, char *args[]) {

	int i, num = 0;
	long int f1 = 1, f2 = 1;

	if (argc > 1) {
		num = atoi(args[1]);    // convert a number string to an integer
		printf("%d\n", num);      // to test if the it get the argument

		if (1 <= num && num <= 40) {
			for (i = 1; i <= num / 2; i++) {
				printf("%12ld", f1);
				printf("%12ld", f2);
				if (i % 2 == 0)
					printf("\n");
				f1 = f1 + f2;
				f2 = f2 + f1;
			}
			if (num % 2 == 1)
				printf("%12ld", f1);
		} else
			printf("The input integer is not in range [1,40].");
	} else
		printf("no argument");

	printf("\n");
	return 0;
}
