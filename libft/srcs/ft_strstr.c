#include "libft.h"

char		*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int j;

	i = 0;
	if (to_find[i] == '\0')
			return ((char *)str);
	while (str[i] != '\0')
		{
			j = 0;
			while (to_find[j] == str [i + j])
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
