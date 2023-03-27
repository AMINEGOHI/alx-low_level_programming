#include "main.h"
/**
 * _strcpy - copies a string from one buffer to another
 *
 * @dest: destination buffer
 * @src: source string
 *
 * Return: pointer to dest
 * */

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

