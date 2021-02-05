#include <stdio.h>
#include <unistd.h>
char	 ft_str_is_alpha(char *str)
	int i;
	i=0;

	while(str[i] != '\0')
	{	
		if(str[0]<='a' && str[0]>='z')
		{
			str[0]=str[0]-('a'-'A');
		}
		else if(((str[i]<='a' && str[i]>='z') && (str[i-1] <= '@')) || (str[i-1] >='{'))
		{
			str[i]=str[i]-('a'-'A');	
		}
			
		else if((str[i]<='A' && str[i]>='Z') && (str[i-1] != ' '))
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
	char str[]="sault, comment tu vas ? 42Mots quarante-deux; cinquante+et+un ";
	int a;

	ft_str_is_alpha(str);
	printf("%s\n",str);
	
}
