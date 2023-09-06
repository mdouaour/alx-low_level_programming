#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - creates a pointer to a 2 dimensional array of integers
 *@width:the number of columns
 *@height:the number of rows
 *Return:a pointer to a 2 dimensional array of integers or NULL
 *
 *
 */
int	**alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **arr;

	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}
	arr = (int **)malloc(height * sizeof(int *));

	if (arr == NULL)
	{
		return (NULL);
	}
	while (i < height)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			return (NULL);
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (arr);
}
