#include <stdio.h>
#include <unistd.h>
int ft_str_is_alpha(char *str,int size)
{
	int i;
	i = 0;

	while(i < size-1)
	{
		if(str[0] == '\0')
		{
			return 1;
		}
		if(' ' > str[i]|| str[i] > '~')
		{
			printf("%c\n",str[i]);	
			return 0;
		}
		printf("%c\n",str[i]);	
		i++;
	}
	return 1;
}


int main(void)
{
	char str[]="3\tt";
	int a;
	int size;
	size=sizeof(str)/sizeof(str[0]);
	a=ft_str_is_alpha(str,size);
	printf("%d\n",a);
	
}
