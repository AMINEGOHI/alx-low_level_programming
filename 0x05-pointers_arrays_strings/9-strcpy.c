#include "main.h"

/**
 * char *_strcpy - Copy a string to a new space in memory
 * @dest: destination to copy to
 * @src: source string to copy
 *
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *p = dest;
	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';
	return dest;
}

