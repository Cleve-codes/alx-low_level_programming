#include "main.h"
/**
 * puts2 - Prints chharacters pf a string starting orom the forst then
 * followed by a new line
 * @str: placeholder of string
 * Return: Nothing to return
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
