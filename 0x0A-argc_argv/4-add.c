#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * isNum - checks if string array in num
 *
 * @num: string to be checked
 *
 * Return: 0 if it's a number and 1 if it's not
 */

int isNum(char num[])
{
	int i, l = strlen(num);

	for (i = 0; i < l; i++)
	{
		if (!isdigit(num[i]))
			return (1);
	}
	return (0);
}

/**
 * main - adds two positive numbers
 *
 * @argc: holds the count of arguments received
 * @argv: array that holds the arguments received
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc < 2)
		printf("0\n");

	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			if (isNum(argv[i]) == 0)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}

