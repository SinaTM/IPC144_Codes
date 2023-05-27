#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {

	int x, y;
	float z;
	x = 2;
	/* calculating value of variable 'y' based on a series of logical expressions. */
	y = (x >= 2) + (x == 3) + (x > 1 || x <= 0) + !((1 && x == 2) && 0);
	z = (float)(y * 10) / 100;
	printf("Value of z is %.2f", z);

	return 0;
}