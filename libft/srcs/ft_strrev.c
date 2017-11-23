char *ft_strrev(char *str)
{
	char h;
	int i;
	int j;

	j = 0;
	i = 0;
	while (*(str + i) != '\0')
		{
			i++;
		}
	i = i - 1;
	while (i > j)
		{
			h = str[i];
			str[i] = str[j];
			str[j] = h;
			i--;
			j++;
		}
	return str;
}
