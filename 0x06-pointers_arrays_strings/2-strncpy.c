#include "main.h"
/**
 * _strncpy - creating function that copies a string
 * @dest: first value
 * @src: second value
 * @n: thrid value
 * Return: always return dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	c = 0;
	while (c < n && src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
