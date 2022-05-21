/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lealberg <lealberg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 13:37:55 by lealberg          #+#    #+#             */
/*   Updated: 2022/04/10 14:08:25 by lealberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	char	numstr[10];
	long	numstr_long;
	int		i;

	numstr_long = n;
	if (numstr_long < 0)
	{
		numstr_long = -numstr_long;
		ft_putchar('-');
	}
	if (numstr_long == 0)
		ft_putchar('0');
	i = 0;
	while (numstr_long > 0)
	{
		numstr[i] = numstr_long % 10 + '0';
		numstr_long = numstr_long / 10;
		i++;
	}
	while (i > 0)
		ft_putchar(numstr[(--i)]);
}
