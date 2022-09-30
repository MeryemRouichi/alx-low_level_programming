#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 *
 * @argc: number of arguments
 * @argv: array that holds the araguments
 *
 * Return: Always 0.
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
