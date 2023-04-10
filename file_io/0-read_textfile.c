#include "main.h"
/**
 * read_textfile - read a text file from the specified
 *
 * @filename: filename of the file to read from the specified
 * @letters: letters to read from the file
 *
 * Return: text file pointer to the text file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *text;
ssize_t nr_bytes, writeText;
text = malloc(letters);
fd = open(filename, O_RDONLY);
if (fd == -1)
{
free(text);
return (0);
}
else
{
nr_bytes = read(fd, text, letters);
writeText = write(STDOUT_FILENO, text, nr_bytes);
close(fd);
if (nr_bytes == 0)
{
return (0);
}
else
{
return (writeText);
}
}
}
