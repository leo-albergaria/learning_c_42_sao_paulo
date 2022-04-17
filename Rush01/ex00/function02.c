/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function02.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lealberg <lealberg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 19:52:47 by lealberg          #+#    #+#             */
/*   Updated: 2022/04/17 18:43:32 by lealberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "definitions.h"

void	ft_show_matrix_ref(int m, char *str)
{
	int	i;

	i = 0;
	while (i < m)
	{
		if ((i >= 7 && i <= 10)
			|| (i >= 13 && i <= 16)
			|| (i >= 19 && i <= 22)
			|| (i >= 25 && i <= 28))
		{
			ft_putchar(str[i]);
			if (i == 4 || i == 10 || i == 16 || i == 22 || i == 28 || i == 34)
				ft_putchar('\n');
			else
				ft_putchar(' ');
		}
		i++;
	}
}

void	ft_show_matrix(int m, char *str)
{
	int	i;

	i = 0;
	while (i < m)
	{
		ft_putchar(str[i]);
		if (i == 5 || i == 11 || i == 17 || i == 23 || i == 29 || i == 35)
			ft_putchar('\n');
		else
			ft_putchar(' ');
		i++;
	}
}

void	ft_show_preencher(char *origem, char *destino)
{
	destino[0] = ' ';
	destino[5] = ' ';
	destino[30] = ' ';
	destino[35] = ' ';
	destino[1] = origem[0];
	destino[2] = origem[1];
	destino[3] = origem[2];
	destino[4] = origem[3];
	destino[31] = origem[4];
	destino[32] = origem[5];
	destino[33] = origem[6];
	destino[34] = origem[7];
	destino[6] = origem[8];
	destino[12] = origem[9];
	destino[18] = origem[10];
	destino[24] = origem[11];
	destino[11] = origem[12];
	destino[17] = origem[13];
	destino[23] = origem[14];
	destino[29] = origem[15];
}

void	ft_achar4e1(char *destino)
{
	int	i;

	i = 0;
	while (destino[i])
	{
		if (ft_atoi(destino[i]) == 4)
		{
			if (i >= 1 && i <= 4)
				destino[i + 6] = '1';
			if (i == 6 || i == 12 || i == 18 || i == 24 || i == 30)
				destino[i + 1] = '1';
			if (i == 11 || i == 17 || i == 23 || i == 29 || i == 35)
				destino[i - 1] = '1';
			if (i >= 31 && i <= 34)
				destino[i - 6] = '1';
		}
		if (ft_atoi(destino[i]) == 1)
		{
			if (i >= 1 && i <= 4)
				destino[i + 6] = '4';
			if (i == 6 || i == 12 || i == 18 || i == 24 || i == 30)
				destino[i + 1] = '4';
			if (i == 11 || i == 17 || i == 23 || i == 29 || i == 35)
				destino[i - 1] = '4';
			if (i >= 31 && i <= 34)
				destino[i - 6] = '4';
		}
		i++;
	}
}
