#include "main.h"
/**
 * _strncat - concatenates two strings and using at most n bytes from src
 * @dest: first value
 * @src: second value
 * @n: value of n bytes
 * Return: always dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
