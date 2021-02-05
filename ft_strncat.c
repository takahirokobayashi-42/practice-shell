/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takobaya <takobaya@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 18:56:15 by takobaya          #+#    #+#             */
/*   Updated: 2020/10/01 05:26:01 by takobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (b < nb)
	{
		while (dest[a] != '\0')
		{
			a++;
		}
		dest[a] = src[b];
		b++;
		a++;
		if(src[b] == '\0')
		{
			return (dest);
		}
	}
	return (dest);
}
