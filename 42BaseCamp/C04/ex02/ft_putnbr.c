/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lealberg <lealberg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:42:02 by lealberg          #+#    #+#             */
/*   Updated: 2022/04/18 22:15:33 by lealberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		i;
	char	nb_char[10];
	long	nb_long;

	if (nb == 0)
		ft_putchar('0');
	if (nb < 0)
	{
		ft_putchar('-');
		nb_long = nb;
		nb_long = -nb_long;
	}
	else
		nb_long = nb;
	i = 0;
	while (nb_long > 0)
	{
		nb_char[i] = nb_long % 10 + '0';
		nb_long = nb_long / 10;
		i++;
	}
	while (--i >= 0)
		ft_putchar(nb_char[i]);
}
