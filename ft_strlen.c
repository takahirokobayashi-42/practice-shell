/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takobaya <takobaya@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 13:33:51 by takobaya          #+#    #+#             */
/*   Updated: 2020/10/01 05:25:10 by takobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
int ft_strlen(char *str)
{
	int i;
	i = 0;

	while(str[i] !='\0')
	{
		str[i]=str[i];
		i++;
	}
	return i;
}

int main(void)
{
	int a;
	char str[]="abcd";
	a = ft_strlen(*str);
	printf("%d\n",a);
}
