#include <string.h>
#include <stdio.h>
char	*ft_strcpy(char *dest,char *src)
{
	strcpy(dest, src);
	return(dest);
}

int	main(void)
{
	char src[] = "takobaya";
	int i;
	i=sizeof(src)/sizeof(src[0]);
	char dest[i];
	ft_strcpy(dest, src);
	printf("%s\n", dest);
}
		
