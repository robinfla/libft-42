#include "libft.h"

static int        ft_count_words(const char *str, char c)
{
    int count;
    int i;
    int j;

    i = 0;
    j = 0;
    count = 0;
    while (str[i])
    {
        while (str[i] != c && str[i])
        {
            j = 1;
            i++;
        }
        if (str[i] == c || str[i] == '\0')
        {
            count = count + ((j == 1) ? 1 : 0);
            j = 0;
            i++;
         }
    }
    return (count);
}

static int        ft_l_w(const char *str, int i, char c)
{
    int count;

    count = 0;
    while (str[i] != c && str[i])
    {
    	count++;
    	i++;
    }
    return (count);
}

char        **ft_strsplit(char const *s, char c)
{
    char **dest;
    int i;
    int j;
    int k;

    i = 0;
    j = 0;
    if ((dest = malloc(sizeof(char *) *ft_count_words(s, c) + 1)) == NULL)
        return (NULL);
    while (s[i])
    {
        while (s[i] == c && s[i])
            i++;
        if (s[i])
        {
            k = 0;
            if ((dest[j] = ft_strnew(ft_l_w(s, i, c))) == NULL)
                return NULL;
            while (s[i] != c && s[i])
                dest[j][k++] = s[i++];
            dest[j++][k] = '\0';
        }
    }
    dest[j] = NULL;
    return (dest);
}
