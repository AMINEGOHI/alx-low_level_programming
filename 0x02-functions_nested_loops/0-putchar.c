#include "main.h"
/**
 * main - a simple program that outputs "_putchar"
 * Return: 0 on success
 */
int main()
{
	char str[] = "_putchar\n";
	int i = 0;

	while (str[i] != '\0')
		_putchar(str[i++]);
	return (0);

  
}
