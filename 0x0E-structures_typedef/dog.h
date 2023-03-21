#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - gives info about a dog
 * @name: first element
 * @age: second element
 * @owner: third element
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
