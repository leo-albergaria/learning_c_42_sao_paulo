/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalucas- <jalucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:44:01 by jalucas-          #+#    #+#             */
/*   Updated: 2022/04/12 15:53:56 by jalucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	num1;
	char	num2;

	num1 = 0;
	num2 = 0;
	while (num1 < 100)
	{
		num2 = num1 + 1;
		while (num2 < 100)
		{
			ft_putchar(num1 / 10 + '0');
			ft_putchar(num1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(num2 / 10 + '0');
			ft_putchar(num2 % 10 + '0');
			if (num1 != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			num2 ++;
		}
		num1++;
	}
}
