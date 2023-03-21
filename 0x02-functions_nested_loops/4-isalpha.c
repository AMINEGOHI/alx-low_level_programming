#include "main.h"
/**
 * _isalpha - checks if  c is an alpha character
 *
 * Return: 1 is c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
