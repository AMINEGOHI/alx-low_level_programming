#include "main.h"

/**
 * _strncat - appends first n characters from src to dest
 *
 * @dest: destination array
 * @src: source array
 * @n: number of characters
 *
 * Return: dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; *(dest + i); i++)
		;
	j = 0;
	while (*(src + j) && j < n)
	{
		*(dest + i + j) = *(src + j);
		j++;
	}
	return (dest);
}
