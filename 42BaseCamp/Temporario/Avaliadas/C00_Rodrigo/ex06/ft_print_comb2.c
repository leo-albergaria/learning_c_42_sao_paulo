/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06_C00.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:44:15 by ralves-b          #+#    #+#             */
/*   Updated: 2022/04/12 23:42:15 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_putchar(int x)
{
	int	unit;
	int	dozen;

	unit = (x % 10) + 48;
	dozen = (x / 10) + 48;
	write(1, &dozen, 1);
	write(1, &unit, 1);
}

void	ft_print_comb2(void)
{
	int	first_n;
	int	second_n;

	first_n = 00;
	second_n = 01;
	while (first_n < 99)
	{
		while (second_n < 100)
		{
			ft_putchar(first_n);
			write(1, " ", 1);
			ft_putchar(second_n);
			if (first_n < 98)
				write(1, ", ", 2);
			second_n++;
		}
		first_n++;
		second_n = first_n + 1;
	}
}
