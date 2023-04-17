#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog
 * @dog_ptr: pointer to the stuct dog.
 */

void print_dog(struct dog *dog_ptr)
{
	if (dog_ptr == NULL)
	{
		return;
	}
	if (dog_ptr->name == NULL || dog_ptr->owner == NULL)
	{
		dog_ptr->name = "nil";
		dog_ptr->owner = "nil";
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", dog_ptr->name, dog_ptr->age, dog_ptr->owner);
}
