#include "function_pointers.h"
/**
 *print_name - prints a name acording to the function pointer passed as parame
 *@name:a pointer to char ,that represente the name thet will be printed
 *@f:a pointer to function that accept a pointer to char as parm ,return void
 *
 *
 *
 */
void	print_name(char *name, void (*f)(char *))
{
	if ((name == NULL) || (f == NULL))
	{
		return;
	}
	f(name);
}
