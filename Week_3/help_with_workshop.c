#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
	// declare and initialized unmodifiable integer variables
	const int intNum1 = 123, intNum2 = 345, intNum3 = 123, intNum4 = 555;

	// declare and initialized unmodifiable floating-point variables
	const double dNum1 = 44.3, dNum2 = 55.2, dNum3 = 65.4, dNum4 = 11.1;

	// declare and initialized floating-point variables
	double average1, average2;

	// declare and initiazlized unmodifiable character variables
	const char ch1 = 'a', ch2 = 'b', ch3 = 'a', ch4 = 'c';

	// calculate the average of dNum1, dNum2, dNum3 and dNum4 ans storing the average in average1
	average1 = (dNum1 + dNum2 + dNum3 + dNum4) / 4.0;

	// calculate the average of intNum1, intNum2, intNum3 and intNum4 by adding them together and dividing the sum by 4. The (double) cast is used to ensure floating-point division. 
	average2 = (double)(intNum1 + intNum2 + intNum3 + intNum4) / 4.0;

	// Prints a message to indicate the interpretation of '0' and '1'
	printf("+++++ In this code \'0\' means False and \'1\' means True +++++\n\n");

	printf("Is \'intNum1\' eqaul to \'intNum2\'? -> %d\n", intNum1 == intNum2);
	printf("Is \'intNum1\' equal to \'intNum3\'? -> %d\n", intNum1 == intNum3);
	printf("Is \'intNum1\' larger than both \'intNum2\' and \'intNum3\'? -> %d\n", intNum1 > intNum2 && intNum1 > intNum2);
	printf("Is \'intNum4\' the largest value between the defined integers? -> %d\n", intNum4 > intNum1 && intNum4 > intNum2 && intNum4 > intNum3);

	// inline calculation:
	printf("intNum1 * intNum2 = %d\n", intNum1 * intNum2);

	printf("Is \'ch1\' equals to \'a\' -> %d\n", ch1 == 'a');


	return 0;

}