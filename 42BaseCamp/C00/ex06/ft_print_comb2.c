/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lealberg <lealberg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 12:44:37 by lealberg          #+#    #+#             */
/*   Updated: 2022/04/10 14:08:09 by lealberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putcomb2(int termo1, int termo2)
{
	char	termochar1;
	char	termochar2;

	termochar1 = (termo1 - (termo1 % 10)) / 10 + '0';
	termochar2 = termo1 % 10 + '0';
	ft_putchar(termochar1);
	ft_putchar(termochar2);
	ft_putchar(' ');
	termochar1 = (termo2 - (termo2 % 10)) / 10 + '0';
	termochar2 = termo2 % 10 + '0';
	ft_putchar(termochar1);
	ft_putchar(termochar2);
	if (!(termo1 == 98 && termo2 == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	termo1;
	int	termo2;

	termo1 = 0;
	termo2 = 0;
	while (termo1 <= 99)
	{
		while (++termo2 <= 99)
			ft_putcomb2(termo1, termo2);
		termo1++;
		termo2 = termo1;
	}
}
