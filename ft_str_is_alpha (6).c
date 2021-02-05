#include <stdio.h>
#include <unistd.h>
char	 ft_str_is_alpha(char *str,int size)
{
	int i;
	i = 0;

	while(str[i] != '\0')
	{
		if('A' <=  str[i] && 'Z' >= str[i])
		{
			str[i]=str[i]+('a'-'A');
		}
		else
		{
			str[i]=str[i];
		}
		i++;
	}
	return *str;
}


int main(void)
{
	char str[]="I AM A PERFECT_HUMAN ";
	int a;
	int size;
	size=sizeof(str)/sizeof(str[0]);
	ft_str_is_alpha(str,size);
	printf("%s\n",str);
	
}
