#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 *str_len - calculate the length of a string
 *@str:a pointer to string
 *Return:the length
 *
 */
int	str_len(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 *str_dup - duplicate a sting and return a pointer to the duplicated
 *@s:the input string that will be duplicated
 *Return:a pointer to char else NULL
 *
 */
char *str_dup(char *s)
{
	int i = 0, l;
	char *s2;

	if (s == NULL)
	{
		return (NULL);
	}
	l = str_len(s);
	s2 = malloc(sizeof(char) * l + 1);
	if (s2 == NULL)
	{
		return (NULL);
	}
	while (i < l)
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
/**
 *print_strings - prints strings
 *@separator:a string that is placed between each string
 *@n:the number of string passed in argument
 */
void	print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);
	if (n == 0)
	{
		printf("\n");
		return;
	}
	while (i < (n - 1))
	{
		str = str_dup(va_arg(args, char *));
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
			free(str);
		}
		if (separator != NULL)
		{
			printf("%s", separator);
			i++;
		}
		else
		{
			i++;
		}
	}
	str = str_dup(va_arg(args, char *));
	if (str ==  NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s\n", str);
		free(str);
	}
	va_end(args);
}
