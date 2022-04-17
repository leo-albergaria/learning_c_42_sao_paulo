/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function05.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lealberg <lealberg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:59:43 by lealberg          #+#    #+#             */
/*   Updated: 2022/04/17 19:13:34 by lealberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "definitions.h"

void	ft_descobrir(char *destino)
{
	int	lin;
	int	col;

	lin = 1;
	while (lin <= 4)
	{
		col = 1;
		while (col <= 4)
		{
			if (destino[(6 * lin) + col] == '0')
			{
				if (destino[(6 * lin) + 1] == '2'
					|| destino[(6 * lin) + 2] == '2'
					|| destino[(6 * lin) + 3] == '2'
					|| destino[(6 * lin) + 4] == '2')
					if (destino[(6 * lin) + 1] == '3'
						|| destino[(6 * lin) + 2] == '3'
						|| destino[(6 * lin) + 3] == '3'
						|| destino[(6 * lin) + 4] == '3')
						destino[(6 * lin) + col] = '2';
				else
					destino[(6 * lin) + col - 2] = '3';
				else
					destino[(6 * lin) + col] = '2';
				break ;
			}
			col++;
		}
		lin++;
	}	
}

void	ft_descobrir3f(char *destino)
{
	int	lin;
	int	col;

	lin = 1;
	while (lin <= 4)
	{
		col = 1;
		while (col <= 4)
		{
			if (destino[(6 * lin) + col] == '0')
			{
				if (destino[(6 * lin) + 1] == '3'
					|| destino[(6 * lin) + 2] == '3'
					|| destino[(6 * lin) + 3] == '3'
					|| destino[(6 * lin) + 4] == '3')
				{
					if (destino[(6 * lin) + 1] == '2'
						|| destino[(6 * lin) + 2] == '2'
						|| destino[(6 * lin) + 3] == '2'
						|| destino[(6 * lin) + 4] == '2')
						destino[(6 * lin) + col] = '3';
					else
						destino[(6 * lin) + col - 2] = '2';
				}
				else
					destino[(6 * lin) + col] = '3';
				break ;
			}
			col++;
		}
		lin++;
	}	
}

void	ft_calculator_matrix(int m, char *matriz_ref)
{
	char	str[36] = "000000000000000000000000000000000000";

	ft_show_preencher(matriz_ref, str);
	ft_achar4e1(str);
	ft_achar4a1(str);
	ft_achar4(str);
	ft_achar4nalina(str);
	ft_achar1(str);
	ft_achar3(str);
	ft_achar32(str);
	ft_preencherl(str);
	ft_preencherc(str);
	ft_preencherl(str);
	ft_preencherc(str);
	ft_achar1(str);
	ft_descobrir(str);
	ft_descobrir3f(str);
	ft_show_matrix_ref(36, str);
}
