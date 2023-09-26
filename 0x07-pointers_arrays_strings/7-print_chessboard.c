#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int v;
	int w;

	for (v = 0; v < 8; v++)
	{
		for (w = 0; w < 8; w++)
			_putchar(a[v][w]);
		_putchar('\n');
	}
}
