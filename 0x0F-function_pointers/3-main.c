#include "3-calc.h"

/**
 * main - check arguments
 * Return: returns error if number of arguments is wrong
 * @argc: number of elements
 * @argv: array of argument
 */

int main(int argc, char *argv[])
{
	int a = 0, b = 0, res = 0;
	char str;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/*check if theres only one operator*/
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	str = argv[2][0];
	if (str != '+' && str != '-' && str != '/'
		&& str != '*' && str != '%')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	res = (get_op_func(argv[2]))(a, b);
	printf("%d\n", res);
	return (0);
}
