#include "main.h"
/**
 * swap_int - swaps the vslue of teo integers
 * @a: Placeholder for int a
 * @b: Placeholder for int b
 *
 * Return: Nothing to return
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
