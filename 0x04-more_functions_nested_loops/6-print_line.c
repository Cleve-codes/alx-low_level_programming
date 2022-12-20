#include "main.h"
/**
 * print_line - Prints a line to the terminal using _
 * @n: Number placeholder representing number of _ to be used
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('-');
		}
		_putchar('\n');
	}
}
