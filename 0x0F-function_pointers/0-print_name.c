#include "function_pointers.h"

/**
  *print_name - prints a name.
  *@name: 1st parameter a pointer to name.
  *@func_ptr: 2nd parameter, a function pointer.
  *
  *Return: void.
  */

void print_name(char *name, void (*func_ptr)(char *))
{
	if (name && func_ptr)
	{
		func_ptr(name);
	}
}
