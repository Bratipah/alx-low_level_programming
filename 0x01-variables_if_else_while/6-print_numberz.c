#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from
 * no use of any variable of type char
 * use only the putchar function
 * Return: 0
 */

int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n += 1;
	}
	putchar('\n');
	return (0);
}
