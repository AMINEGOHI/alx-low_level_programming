#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - this is main function
 * Return: Always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	char alpha;
	/* your code goes there */
	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}
