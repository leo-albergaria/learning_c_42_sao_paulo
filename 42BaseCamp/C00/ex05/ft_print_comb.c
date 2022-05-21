/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lealberg <lealberg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 12:08:24 by lealberg          #+#    #+#             */
/*   Updated: 2022/04/10 14:08:03 by lealberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	putcomp(char comb[3])
{
	ft_putchar(comb[0]);
	ft_putchar(comb[1]);
	ft_putchar(comb[2]);
	if (!(comb[0] == '7' && comb[1] == '8' && comb[2] == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	comb[3];
	
	comb[0] = '0';
	comb[1] = '1';
	comb[2] = '1';

	while(1)
	{
		while(++comb[2] <= '9')
			putcomp(comb);
		if (++comb[1] <= '8')
			comb[2] = comb[1];
		else if (++comb[0] <= '7')
		{
			comb[1] = comb[0] + 1;
			comb[2] = comb[1];
		}
		else
			break;
	}
}
