#ifndef holbertonProjects
#define holbertonProjects

/**
 * main - more functions and loops
 * @c: parameter
 * Return: Always 0.
 *
 */

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));


#endif
