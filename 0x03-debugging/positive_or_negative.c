#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - checks if a number is positive or negative
 * @n: input
 * Return: always return 0
 *
 */
int positive_or_negative(int n)
{

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
