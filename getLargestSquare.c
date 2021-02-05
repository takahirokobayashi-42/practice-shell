/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getLargestSquare.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takobaya <takobaya@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 22:56:25 by takobaya          #+#    #+#             */
/*   Updated: 2020/09/29 22:39:52 by takobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getLargestSquare(int *(maxpoint)[0]);
void		map_maker(int x, int y,int density, char (*array)[127]);
void		map_viewer(char (*array)[127]);
int		ft_min(int x, int y);
int		ft_max(int x, int y);

int x=3;
int y=3;
int density=2;

int main(void)
{
	int maxpoint[0][0];
	printf("%s %d\n", "LargeSquareWidth is ", getLargestSquare((*maxpoint)[0]));
	printf("%d",maxpoint[0][0]);

	return (0);
}

int getLargestSquare(int maxpoint[0][0])
{
	char G[127][127];
	int W[127][127];

	map_maker(x,y,density,G);
	map_viewer(G);
	for(int i = 0; i < y; i++)
	{
		W[0][i] = (G[0][i] == 'o') ? 0:1;

	for(int i = 0; i < x; i++)
	{
		W[i][0] = (G[i][0] == 'o') ? 0:1;
	}

	int maxWidth = 0;
	for(int i = 1; i < y; i++)
	{
		for(int j = 1; j < x; j++)
		{
			if(G[i][j] == 'o')
			{
				W[i][j] = 0;
			}
			else
			{
				W[i][j] = ft_min(W[i-1][j-1], ft_min(W[i-1][j], W[i][j-1])) + 1;
				maxWidth = ft_max( maxWidth, W[i][j]);
				if(maxWidth == ft_max(maxWidth, W[i][j]))
				maxpoint = W[i][j];
				printf("%d",maxpoint[0][0]);
			}
		}
	}
	return (maxWidth);
}

void    map_maker(int x, int y,int density, char (*array)[127])
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
			if ((rand() % 10 + 1) < density)
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

int ft_min(int x,int y)
{
	int min;
	if (x < y)
	{
		min = x;
	}
	else
	{
		min =y;
	}
	return (min);
}

int ft_max(int x, int y)
{
	int max;
	if (x < y)
	{
		max = y;
	}
	else
	{
		max = x;
	}
	return (max);
}

void map_viewer(char (*array)[127])
{
	int i = 0;
	int j = 0;	
	while (i < 10)
	{
		j = 0;
		while ( j < 10)
		{
			printf("%c", array[i][j]);
			j++;
		}
		printf("%c", '\n');
		i++;
	}
}

