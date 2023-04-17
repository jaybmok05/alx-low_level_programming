#include <stdio.h>
#define FILE_NAME __FILE__
/**
 * main - a program that prints the name of
 * the file it was compiled from,
 * Return: returns 0 when succesful
 */

int main(void)
{
	printf("%s\n", FILE_NAME);
	return (0);
}
