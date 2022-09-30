#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: holds the count of arguments received
 * @argv: array that holds the arguments received
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, mult;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < 2; i++)
		{
			mult = atoi(argv[i]) * atoi(argv[i + 1]);
		}
		printf("%d\n", mult);
	}
	return (0);
}
