#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strcopy - function for copy name and owner in dog
 * @dName: parameter
 * @dOwner: parameter
 *
 * Return: 0
 *
 */

void _strcopy(char *dName, char *dOwner)
{
int i;
for (i = 0; dOwner[i]; i++)
dName[i] = dOwner[i];

dName[i] = '\0';
}

/**
 * new_dog - Instance of struct dog
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 *
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *otherDog;
int a, b;
for (a = 0; name[a]; a++)
;
for (b = 0; owner[b]; b++)
;
otherDog = malloc(sizeof(dog_t));
if (otherDog == NULL)
return (NULL);
otherDog->name = malloc(a + 1);
if (otherDog->name == NULL)
{
free(otherDog);
return (NULL);
}
otherDog->owner = malloc(b + 1);
if (otherDog->owner == NULL)
{
free(otherDog->name);
free(otherDog);
return (NULL);
}
_strcopy(otherDog->name, name);
_strcopy(otherDog->owner, owner);
otherDog->age = age;
return (otherDog);
}

