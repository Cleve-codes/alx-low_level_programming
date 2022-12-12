#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - Gives a random number and ouputs the last digit stating whether
*its less than or greater than 5
*Return: If exited succesfully returns zero
*/
int main(void)
{
int n;
int m;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
m = (n % 10);
printf("Last digit of %d is %d", n, m);
if (m == 0)
{
printf("and is 0\n");
}
else if (m > 5)
{
printf("and is greater than 5\n");
}
else if (m < 6 && m != 0)
{
printf("is less than 6 and not 0\n");
}
return (0);
}
