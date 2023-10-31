#include "main.h"

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_a;
	ssize_t len1, len2;
	char *buf;

	if (filename == NULL)
		return (0);
	file_a = open(filename, O_RDONLY);
	if (file_a == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(file_a);
		return (0);
	}
	len1 = read(file_a, buf, letters);
	close(file_a);
	if (len1 == -1)
	{
		free(buf);
		return (0);
	}
	len2 = write(STDOUT_FILENO, buf, len1);
	free(buf);
	if (len1 != len2)
		return (0);
	return (len2);
}
