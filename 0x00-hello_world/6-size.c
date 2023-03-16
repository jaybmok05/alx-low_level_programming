#include <stdio.h>

/**
 * main - using prinf to print sizeof data types
 * Return: this returns 0 always
 */

int main(void)
{
	printf("%\"Size of a char:\n", sizeof(char));
	printf("%\"Size of an int:\n", sizeof(int));
	printf("%\"Size of a long int:\n", sizeof(long int));
	printf("%\"Size of a long long int:\n", sizeof(long long int));
	printf("%\"Size of a float:\n", sizeof(float));
	return (0);
}
