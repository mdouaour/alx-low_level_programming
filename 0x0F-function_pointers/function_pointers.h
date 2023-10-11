#ifndef FUN_P
#define FUN_P
#define NULL ((void *)0)
void	print_name(char *name, void (*f)(char *));
void	array_iterator(int *array, size_t size, void (*action)(int));
#endif
