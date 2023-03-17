#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */
/**
 * main - this is main function
 * Return: Always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int i;
	/* your code goes there */
	for (i = 0; i < 16; i++)
	{
		if (i < 10)
			putchar('0' + i);
		else
			putchar('a' + i - 10);
	}
	putchar('\n');
	return (0);
}
