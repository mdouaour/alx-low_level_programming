#ifndef MAIN_H
#define MAIN_H
#ifndef NULL
#define NULL ((void *)0)
#endif
int	_putchar(char c);
void	*malloc_checked(unsigned int b);
char	*string_nconcat(char *s1, char *s2, unsigned int n);
unsigned int	_length(char *s);
void	*_calloc(unsigned int nmemb, unsigned int size);
#endif
