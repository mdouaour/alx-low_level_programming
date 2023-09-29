#include "main.h"
/**
 *is_palindrome - return 1 if a string is a palindrome 0 if not
 *@s:a pointer to the string that will be checked if it is a palindrome
 *Return:1if it is a palindrome 0 if not
 *
 *
 */
int	is_palindrome(char *s)
{
	int l;

	if (s == NULL)
	{
		return (0);
	}
	l = _length(s);
	if (l == 0)
	{
		return (1);
	}
	return (compare(1, l, s, (s + l - 1)));
}
/**
 *_length - returns the length of a string
 *@s:the input string
 *Return:an integer , the length of the string
 *
 *
 */
int	_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _length(s + 1));

}
/**
 *compare - compares caracters of a string
 *@l:counts the number of comparaison
 *@l2:the length of the string
 *@s1:a pointer to the left caracter
 *@s2:a pointer to the right caracter
 *Return:1 if the string  is palyndrome else 0
 */
int	compare(int l, int l2, char *s1, char *s2)
{
	if (*s1 != *s2)
	{
		return (0);
	}
	if ((*s1 == *s2) && (l == (l2 / 2)))
	{
		return (1);
	}
	return (compare(l + 1, l2, s1 + 1, s2 - 1));
}
