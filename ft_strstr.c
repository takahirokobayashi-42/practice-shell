#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if(to_find[j] == '\0')
		return str;
	while(str[i])
	{
		j = 0;
		while(str[i + j] == to_find[j] && str[i + j])
		{
			j++;
			if(to_find[j] == '\0')
				return &str[i];
		}
		i++;
	}
	return NULL;
}

int main(void)
{
	char *c;
	char a[]="abcdefghi";
	char b[]="cd";
	c = ft_strstr(a,b);
	printf("%s\n", c);
}
