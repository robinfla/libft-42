#include "libft.h"

char		*ft_strdup(const char *src)
{
	char *dest = NULL;
	int i;
	int j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	if ((dest = malloc(i * sizeof(char))) == NULL)
		return (NULL);
	while (j < i)
	{
		dest[j] = src[j];
		j++;
	}
	dest [j] = '\0';
	return (dest);
}
