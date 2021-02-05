#include <unistd.h>
#include <stdio.h>
void ft_putnbr(int nb);
void	ft_rev_int_tab(int *num, int size);


void ft_putnbr(int nb)
{
	int num[10];
	char *c;

	int size=0;
	while(nb<10)
	{
		while(nb>=10)
		{
			num[size]=nb%10;
			nb=nb/10;
			size++;
		}
		ft_rev_int_tab(num,size);
		
		size = 0;
		
		while(size != '\0')
		{
			num[size]= num[size]-'0';
			printf("%c,",num);
			size++;
		}
		nb = nb+'0';
		write(1, &nb, 1);
	}
}

	
void	ft_rev_int_tab(int *num, int size)
{
	int temp;
	int i;

	i = 0;
	while (i <= size / 2)
	{
		temp = num[i];
		num[i] = num[size - i];
		num[size - i] = temp;
		i++;
	}
}

int main(void)
{	
	ft_putnbr(42);
}
