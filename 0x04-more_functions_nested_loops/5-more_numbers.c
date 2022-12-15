#include "main.h"
/**
 *more_numbers - Prints numbers 0 to 14, 10 times
 *
 */
void more_numbers(void)
{
	int n;
	int i;

	while (i < 10)
	{
		for (n = 0; n < 15; n++)
		{
			if (n >= 10)
				_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		i++;
	}
	_putchar('\n');
}
