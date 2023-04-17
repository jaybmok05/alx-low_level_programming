#include "dog.h"
#include <stdlib.h>

/**
 * init_dog -  a function that initialize a variable of type struct dog
 * @dog_ptr: a pointer to  struct variable
 * @name: 1st member to struct dog
 * @age: 2nd member to struct dog
 * @owner: 3rd member to struct dog
 */

void init_dog(struct dog *dog_ptr, char *name, float age, char *owner)
{
	if ( dog_ptr == NULL)
	{
		dog_ptr = malloc(sizeof(struct dog));
	}
	dog_ptr->name = name;
        dog_ptr->age = age;
        dog_ptr->owner = owner;
}
