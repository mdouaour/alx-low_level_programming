#ifndef MAIN_H
#define MAIN_H
#ifndef NULL
#define NULL ((void *)0)
#endif
void	*malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int	_length(char *str);
void	*_calloc(unsigned int nmemb, unsigned int size);
#endif
