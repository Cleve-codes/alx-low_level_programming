#include "main.h"
/**
 * print_most_numbers - prints the numbers 0 to 9
 * except 2 and 4 followed by a new line
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n != 4 || n != 2)
		{
			_putchar(n);
		}
		_putchar('\n');

	}
}
