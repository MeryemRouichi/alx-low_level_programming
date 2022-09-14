#include "main.h"

/**
 * positive_or_negative - a function that ouptputs if the integer is positive or negative
 *
 * @i: the integer in question
 *
 * Return: Void
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
