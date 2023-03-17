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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	for( alpha = 'a'; alpha <= 'z'; alpha++ ){
		putchar(alpha);
	}
	return (0);
}
