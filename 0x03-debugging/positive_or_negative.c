#include <stdio.h>
/**
 * main - Entry point
 * Description: Print if a value n is positive or negative
 * Return: Always 0 if succesful
 */
void positive_or_negative(int i)
{
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
