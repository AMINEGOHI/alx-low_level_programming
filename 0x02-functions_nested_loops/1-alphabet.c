#include "main.h"
/**
 * print_alphabet - prints the alphabet
 * Return: void
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
		_putchar(alphabet++);
	_putchar('\n');
}
