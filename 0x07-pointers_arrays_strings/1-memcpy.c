#include "main.h"
/**
 * memcpy - prints buffer in hexa
 * @dest: the address memory to print in
 * @src:  the assress memory to read from
 * @n: the size of the memory to print
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
