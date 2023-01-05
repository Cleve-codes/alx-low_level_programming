#include"main.h"
/**
 * prime - checks if number is prime
 * @n: number
 * @c: iterator
 * Return: prime
 */
int prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + prime(n, c + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: integer
 * Return: Nothing to return
 */
int is_prime_number(int  n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);

	return (prime(n, 2));
}
