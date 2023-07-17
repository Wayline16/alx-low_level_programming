#include "dog.h"
/**
 * Write a function that initialize a variable of type struct dog
 * Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	  (*d).name = name;
  	  (*d).age = age;
	  (*d).owner = owner;
	}
}
