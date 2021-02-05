/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takobaya <takobaya@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 17:01:36 by takobaya          #+#    #+#             */
/*   Updated: 2020/09/26 17:55:07 by takobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int a;
	int b;
	a = 0;
	while(a <= (n - 1))
	{
		b = s1[a] - s2[a];
		if(s1[a] - s2[a] != 0)
			return b;
		a++;
	}
	return b;
}

int main(void)
{
	int c;
	char s1[]="abdda";
	char s2[]="abcd";
	c=ft_strncmp(s1,s2,5);
	printf("%d\n",c);
}
