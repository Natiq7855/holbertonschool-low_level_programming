#include "dog.h"
#include <stdlib.h>

/* Helper to get string length without strlen */
int _strlen(char *s)
{
int len = 0;

while (s[len] != '\0')
len++;
return (len);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog (dog_t), or NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
int len_name, len_owner, i;

if (name == NULL || owner == NULL)
return (NULL);

d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);


len_name = _strlen(name);
d->name = malloc(len_name + 1);
if (d->name == NULL)
{
free(d);
return (NULL);
}
for (i = 0; i <= len_name; i++)
d->name[i] = name[i];

len_owner = _strlen(owner);
d->owner = malloc(len_owner + 1);
if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}
for (i = 0; i <= len_owner; i++)
d->owner[i] = owner[i];

d->age = age;

return (d);
}
