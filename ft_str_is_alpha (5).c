#include <stdio.h>
#include <unistd.h>
char	 ft_str_is_alpha(char *str,int size)
{
	int i;
	i = 0;

	while(i < size-1)
	{
		if('a' <=  str[i] && 'z' >= str[i])
		{
			str[i]=str[i]-('a'-'A');
		}
		
		i++;
	}
	return *str;
}


int main(void)
{
	char str[]="aaaaa";
	int a;
	int size;
	size=sizeof(str)/sizeof(str[0]);
	ft_str_is_alpha(str,size);
	printf("%s\n",str);
	
}
