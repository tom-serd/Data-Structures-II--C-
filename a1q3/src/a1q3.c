/*
 -------------------------------------------------------
 Project: a1q3
 File:    a1q3.c
 -------------------------------------------------------
 Author:  Thomas Serdioukov
 ID:      140120470
 Email:   serd0470@mylaurier.ca
 Version:
 -------------------------------------------------------
 */
#include <stdio.h>
#include <math.h>    // need this library for maths functions  fabs() and sqrt()

int main() {
	float a, b, c, disc, x1, x2, real, imagine;
	int inn;
	do {  // do-while for new qs problem

		// do-while loop to get correct input of three floating numbers,
		printf("Please enter the coefficients a,b,c:\n");
		fflush(stdout);
		inn = scanf("%f,%f,%f", &a, &b, &c);

		if (inn != 3) {
			printf("Invalid input\n");

			fflush(stdout);
		}

		do {  // fflush
			if (getchar() == '\n')
				break;
		} while (1);


		if (inn!=3);
		else if (fabs(a) <= 1e-6) {   // not
			if (fabs(b) <= 1e-6 && fabs(c) <= 1e-6){
				printf("not a quadratic equation\n");
				break;
			} else printf("not a quadratic equation\n");
		}
		else {
			disc = b * b - 4 * a * c;
			if (fabs(disc) < 1e-6) {
				printf("The equation has two equal roots: %8.4f\n",
						-b / (2 * a));
			} else if (disc > 1e-6) {
				x1 = (float) (-b + sqrt(disc)) / (2 * a);
				x2 = (float) (-b - sqrt(disc)) / (2 * a);
				printf("The equation has distinct real roots:\n");
				printf("%8.4f and %8.4f\n", x2, x1);
			} else {
				imagine = (float) sqrt(-disc);
				real = (float) (-b / (2 * a));
				printf("The equation has complex roots:\n");
				printf("%8.4f + %8.4fi\n", real, imagine);
				printf("%8.4f - %8.4fi\n", real, imagine);
			}
		}
	} while (1);
}
