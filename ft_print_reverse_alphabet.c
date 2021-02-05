/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takobaya <takobaya@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 01:47:19 by takobaya          #+#    #+#             */
/*   Updated: 2020/09/27 01:47:25 by takobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char alp;

	alp = 'z';
	while (alp >= 'a')
	{
		write(1, &alp, 1);
		alp--;
	}
}
