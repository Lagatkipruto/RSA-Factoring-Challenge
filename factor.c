#include "factor.h"
#include <stdio.h>

/**
 * main - main function for the code.
 * @argc - The number of arguments passed
 * @argv - the list of commands passed.
 *
 * Return: void.
 */
int main(int argc, char *argv[])
{

	FILE *fptr;
	size_t count;
	ssize_t line;
	char *buffer = NULL;


	if (argc != 2)
	{

		fprintf(stderr, "Usage: factor <filename>\n");
		exit(EXIT_FAILURE);
	}
	fptr = fopen(argv[1], "r");
	if (fptr == NULL)
	{

		fprintf(stderr, "Error: can't open files\n");
		exit(EXIT_FAILURE);
	}
	while ((line = getline(&buffer, &count, fptr)) != -1)
	{

		factorize(buffer);
	}
return (0);
}
