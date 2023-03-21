#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - determine if number is positive or negative
 *
 * Description: program will assign  random number to the variable in each time
 * it is executed.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;


srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
printf("%d is zero\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is positive\n", n);

return (0);
}
