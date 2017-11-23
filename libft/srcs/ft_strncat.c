#include "libft.h"

char		*ft_strncat(char *dest, const char *src, size_t nb)
{
	size_t i;
	size_t j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
		{
			i++;
		}
	while (src[j] != '\0' && j < nb)
		{
			dest[i] = src [j];
			i++;
			j++;
		}
	dest[i] = '\0';
	return (dest);
}
