#ifndef MAIN_FILE_H
#define MAIN_FILE_H
/**
 * malloc_checked - a function that allocates memory using malloc.
 * Return: Returns a pointer to the allocated memory
 * if malloc fails, the malloc_checked function should
 * cause normal process termination with a status value of 98
 * @bytes: parameter.
 */

/*list of function prototype*/
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
#endif
