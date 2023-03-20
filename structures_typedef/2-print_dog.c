#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print values of objet dog
 * @d: parameter
 *
 *
 *
 * Return
 *
 */
void print_dog(struct dog *d)
{
if (d->name != NULL || d->age >= 0 || d->owner != NULL)
{
printf("Name: %s\n", d->name);
printf("Age: %6f\n", d->age);
printf("Owner: %s\n", d->owner);
}
else
{
printf("(nil)\n");
printf("(nil)\n");
printf("(nil)\n");
}
}
