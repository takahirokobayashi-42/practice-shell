#include <unistd.h>

void	get_num(int a, int b);
void	ft_putchar(char c);

int main (void)
{
	int a;
	int b;

	a=0;
	b=1;

	while (a < 98 && a !=b)
	{

		while (b < 100)
			{
				get_num(a,b);
	
				b++;
			}
	
	a++;
	b=a+1;
	get_num(a,b);

	}
}

void	get_num(int a,int b)
{
	char a1;
	char a2;
	char b1;
	char b2;

	a1=(a%10)+'0';
	a2=(a/10)+'0';

	b1=(b%10)+'0';
	b2=(b/10)+'0';

	write(1, &a2, 1);
	write(1, &a1, 1);
	write(1, " ", 1);
	write(1, &b2, 1);
	write(1, &b1, 1);
	write(1, ",", 1);

	if(a==98)
		write(1, "\n", 1);

}

			

