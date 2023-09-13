#ifndef FUN_P
#define FUN_P
#ifndef NULL
#define NULL ((void *)0)
#endif
void	_putchar(char c);
void	print_name(char *name, void (*f)(char *));
void	array_iterator(int *array, size_t size, void (*action)(int));
#endif
