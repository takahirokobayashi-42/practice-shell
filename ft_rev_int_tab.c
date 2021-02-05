/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takobaya <takobaya@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 19:31:52 by takobaya          #+#    #+#             */
/*   Updated: 2020/10/01 18:40:07 by takobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int i;

	i = 0;
	while (i <= size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i];
		tab[size - i] = temp;
		i++;
	}
}

int main(void)
{
	int size=10;
	int tab[size]=1;
	printf("%d\n",ft_rev_int_tab(tab,size));
}

