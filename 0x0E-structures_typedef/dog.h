#ifndef DOG_FILE_H
#define DOG_FILE_H

/**
 * struct dog - this is struct that has details for
 * a dog.
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: this is variable to capture the name of the
 * dog owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;/*typedef for struct dog*/
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
