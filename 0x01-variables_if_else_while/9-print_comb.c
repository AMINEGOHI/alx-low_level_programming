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
	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
