#ifndef MAIN_H
#define MAIN_H
#ifndef NULL
#define NULL ((void *)0)
#endif
void	*malloc_checked(unsigned int b);
int	_length(char *str);
char	*string_nconcat(char *s1, char *s2, unsigned int n);
void	*_calloc(unsigned int nmemb, unsigned int size);
int	*array_range(int min, int max);
void	*_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void	init(char *p, char *ptr, unsigned int n);
#endif
