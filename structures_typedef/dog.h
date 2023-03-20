#ifndef DOG
#define DOG

/**
 * struct dog - struct initialize
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 *
 * Return: 0
 */


typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
