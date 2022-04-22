/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lealberg <lealberg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 01:19:30 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/04/22 15:07:34 by lealberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_div(int div)
{
	return (div / 10);
}

int	ft_mod(int mod)
{
	return (mod % 10);
}

void	ft_putnbr(int nb)
{
	int	nb_to_char;

	nb_to_char = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar(45);
		nb = nb * (-1);
	}
	if (nb > 9)
	{
		ft_putnbr(ft_div(nb));
		ft_putnbr(ft_mod(nb));
	}	
	else
	{
		nb_to_char = nb + 48;
		ft_putchar(nb_to_char);
	}		
}
