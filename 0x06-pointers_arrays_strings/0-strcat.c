/**
 * _strcat - concatenate two string
 *@dest:where we append src
 *@src:the string that willbe added to dest
 *Return:a pointer to the resolting string dest
 */
char	*_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	dest[i] = src[j];
	i++;
	j++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);



}
