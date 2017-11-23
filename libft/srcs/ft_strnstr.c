#include "libft.h"

char		*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	if (to_find[i] == '\0')
			return ((char *)str);
	while (str[i] != '\0')
		{
			j = 0;
			while (to_find[j] == str [i + j] && (i + j) < n)
				{
					if (to_find[j + 1] == '\0')
						{
						    return (char *)(str + i);
						}
				j++;
				}
			i++;
		}
	return NULL;
}
