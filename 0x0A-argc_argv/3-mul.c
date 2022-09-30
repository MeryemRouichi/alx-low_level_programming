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
	int mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mult =  atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", mult);
	}
	return (0);
}
