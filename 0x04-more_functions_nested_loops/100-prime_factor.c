#include <stdio.h>
#include <time.h>
#include <math.h>
/**
 * main - finds the larges prime factor of a number followed by an ew line
 * Return: 0 if succesful
 */
int main(void)
{
	long int i;
	long int n;
	long int max;

	n = 612852475143;
	max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i= i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}

	if (n > 2)
		max = n;
	printf("%ld\n", max);

	return (0);
}
