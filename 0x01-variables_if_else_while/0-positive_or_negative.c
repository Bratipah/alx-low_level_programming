#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */
/* betty style doc for function main goes there */
/** main-random number to n is executed
 * when n>0 -positive, when n=0; is zero
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("%d is positive\n", n);
}
else if (n < 0)
{
	printf("%d is negative\n", n);
}
else
{
	printf("%d is zero\n", n);
}
return (0);
}
