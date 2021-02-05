#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void	map_maker (int x, int y, char (*array)[127]);

int		main(void)
{
	int	i = 0;
	int	j = 0;
	char	array[127][127];
	map_maker(10, 10, array);

	while (i < 10)
	{
		j = 0;
		while( j < 10)
		{
			printf("%c", array[i][j]);
			j++;
		}
		printf("%c", '\n');
		i++;
	}
	return (0);
}

void	map_maker(int x, int y, char (*array)[127])
{
	int i;
	int j;

	i = 0;
	j = 0;
	srand(time(NULL));
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if ((rand() % 10 + 1) < 5)
			{
				array[i][j] = 'o';
			}
			else
			{
				array[i][j] = '.';
			}
			j++;
		}
		i++;
	}
	array[i][j] = '\0';
}
