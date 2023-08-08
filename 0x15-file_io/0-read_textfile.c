#include "main.h"

/**
 * read_textfile - read text from file
 * @filename: the name
 * @letters: bytes
 * Return: number of bytes
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int ed;
	ssize_t b;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	ed = open(filename, O_RDONLY);
	if (ed == -1)
		return (0);
	b = read(ed, &buf[0], letters);
	b = write(STDOUT_FILENO, &buf[0], b);
	close(ed);
	return (b);
}
