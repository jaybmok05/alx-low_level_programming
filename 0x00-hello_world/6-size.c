#include <stdio.h>

/**
 * main - using prinf to print sizeof data types
 * Return: this returns 0 always
 */

int main(void)
{
	char fav_letter;
	int age;
	long int id;
	long long int b;
	float weight;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(fav_letter));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(age));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(id));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(weight));
	return (0);
}
