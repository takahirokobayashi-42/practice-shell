#include <stdio.h>
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;

	i=0;
	while(i < size)
	{
		while(i < size-1)
		{	
			dest[i]=src[i];
			i++;
		}
	dest[i] = '\0';
	i++;
	}
	i = 0;
	while(src[i] != '\0')
	{
	i++;
	}
	return i; 
}

int main(void)
{
	char src[]="abcde";
	char dest[10];
	int size = 4;
	int a;
	a = ft_strlcpy(dest,src,size);
	printf("%d , %s",a,dest);
}		
