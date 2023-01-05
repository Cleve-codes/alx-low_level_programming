#include"main.h"
/**
 * factorial - Printd factorial of a number
 * @n: integer placeholder
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
