#include "3-calc.h"

/**
  *op_add - a function that returns the sum of 2 numbers.
  *@a: 1st integer.
  *@b: 2nd integer.
  *
  *Return: returns the sum of integers.
  */

/*start of op_add*/
int op_add(int a, int b)
{
	int sum = a + b;

	return (sum);
}
/*end*/

/**
 * op_sub - a function that returns difference of 2 numbers
 * Return: returns the difference.
 * @a: 1st integer.
 * @b: 2nd integer.
 */

/*start of op_sub*/
int op_sub(int a, int b)
{
	int diff = a - b;

	return (diff);
}
/*end*/

/**
 * op_mul - a function that returns product of two numbers.
 * Return: returns the product.
 * @a: 1st integer.
 * @b: 2nd integer.
 */

/*start of op_mul*/
int op_mul(int a, int b)
{
	int product = a * b;

	return (product);
}
/*end*/

/**
 * op_div - a function that returns the quotient of 2 numbers.
 * Return: returns the quotient.
 * @a: 1st integer.
 * @b: 2nd integer.
 */

/*start of op_div*/
int op_div(int a, int b)
{
	double quotient = a / b;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (quotient);
}
/*end*/

/**
 * op_mod - a function that returns the remainder of division.
 * Return: returns the remainder.
 * @a: 1st integer.
 * @b: 2nd integer.
 */

/*start of op_mod*/
int op_mod(int a, int b)
{
	int remainder = a % b;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (remainder);
}
/*end*/
