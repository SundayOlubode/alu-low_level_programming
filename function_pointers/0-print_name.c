#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Print name with callback function
 * @name: name to be printed
 * @f: pointer to cb function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}

/**
 * print_lowercase - cb function
 * @str: char string to print
 */
void print_lowercase(char *str)
{
	while (*str)
	{
		printf("%c", *str);
		str++;
	}
	printf("\n");
}
