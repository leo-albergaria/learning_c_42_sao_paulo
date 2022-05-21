/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalucas- <jalucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:54:04 by jalucas-          #+#    #+#             */
/*   Updated: 2022/04/12 16:18:16 by jalucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	limit(char A, char B, char C)
{
	write (1, &A, 1);
	write (1, &B, 1);
	write (1, &C, 1);
	if (A != '7' || B != '8' || C != '9')
	{
		write (1, ", ", 2);
	}	
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				limit(x, y, z);
				z++;
			}
			y++;
		}
	x++;
	}		
}
