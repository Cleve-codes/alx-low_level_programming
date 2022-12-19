#include <stdio.h>
#include "main.h"
/**
 * print_array - Print n elements of an array of integers
 *
 * @n: Place holder for number to be used as predicate
 * @a: string parameter
 *
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
