#ifndef DOG_FILE_H
#define DOG_FILE_H

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: pointer to a struct datatype dog
 * @name: 1st member of struct dog
 * @age: 2nd member of struct dog
 * @owner: 3rd member of struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
