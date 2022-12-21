#include "main.h"
/**
 * reverse_array - a function that reverses an array
 * @n: Number of elements to swap
 * @a: Pointer to int array
 * Return: Nothing to return
 */
void reverse_array(int *a, int n)
{
	int c, b, temp;

	c = 0;
	b = n - 1;

	while (c < b)
	{
		temp = a[c];
		a[c] = a[b];
		a[b] = temp;
		c++;
		b--;
	}
}
