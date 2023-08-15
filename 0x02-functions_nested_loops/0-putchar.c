#include<unistd.h>
void	_putchar(char c);
/**
 *main - Entry point
 *Description:'prints _putchar, followed by a new line'
 *Return:Always 0 (Succes)
 */
int main(void)
{
	char str[] = "_putchar\n";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar (str[i]);
		i++;
	}


	return (0);
}
