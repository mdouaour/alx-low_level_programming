#include<unistd.h>
/**
 * _putchar - prints a single caracter in stdout
 *@c:a caractar
 *
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
