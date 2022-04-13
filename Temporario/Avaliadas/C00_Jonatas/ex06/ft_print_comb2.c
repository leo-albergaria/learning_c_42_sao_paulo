/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonolive <jonolive@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 00:47:59 by jonolive          #+#    #+#             */
/*   Updated: 2022/04/10 22:14:33 by jonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		x;
	int		y;

	x = 0;
	y = 1;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_putchar((x / 10) + '0');
			ft_putchar((x % 10) + '0');
			write(1, " ", 1);
			ft_putchar((y / 10) + '0');
			ft_putchar((y % 10) + '0');
			if (x != 98 || y != 99)
			{
				write(1, ", ", 2);
			}
			y++;
		}
		x++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
}
*/