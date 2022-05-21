/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 21:53:48 by coder             #+#    #+#             */
/*   Updated: 2022/04/12 23:23:36 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	limite(char c, char d, char u)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
	if (c != '7' || d != '8' || u != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	cen;
	char	dez;
	char	uni;

	cen = '0';
	while (cen <= '7')
	{
		dez = cen +1;
		while (dez <= '8')
		{
			uni = dez +1;
			while (uni <= '9')
			{
				limite(cen, dez, uni);
				uni++;
			}
			dez++;
		}
		cen++;
	}
}
