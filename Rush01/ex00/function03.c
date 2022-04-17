/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function03.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lealberg <lealberg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:40:48 by lealberg          #+#    #+#             */
/*   Updated: 2022/04/17 18:58:50 by lealberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "definitions.h"

void	ft_achar4a1(char *destino)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (destino[1 + i] == '1' && destino [31 + i] == '4')
		{
			destino[7 + i] = '4';
			destino[13 + i] = '3';
			destino[19 + i] = '2';
			destino[25 + i] = '1';
		}
		if (destino[1 + i] == '4' && destino [31 + i] == '1')
		{
			destino[7 + i] = '1';
			destino[13 + i] = '2';
			destino[19 + i] = '3';
			destino[25 + i] = '4';
		}
		i++;
	}	
	i = 0;
	while (i < 4)
	{
		if (destino[6 + i] == '1' && destino [11 + i] == '4')
		{
			destino[7 + i] = '4';
			destino[8 + i] = '3';
			destino[9 + i] = '2';
			destino[10 + i] = '1';
		}
		if (destino[6 + i] == '4' && destino [11 + i] == '1')
		{
			destino[7 + i] = '1';
			destino[8 + i] = '2';
			destino[9 + i] = '3';
			destino[10 + i] = '4';
		}
		i++;
	}	
}

void	ft_achar4(char *destino)
{
	int	achei_linha;
	int	achei_coluna;
	int	qtde;

	qtde = 1;
	while (qtde <= 2)
	{
		achei_linha = 0;
		if (!(destino[7] == '4' || destino[8] == '4'
				|| destino[9] == '4' || destino[10] == '4'))
			achei_linha = 1;
		else if (!(destino[13] == '4' || destino[14] == '4'
				|| destino[15] == '4' || destino[16] == '4'))
			achei_linha = 2;
		else if (!(destino[19] == '4' || destino[20] == '4'
				|| destino[21] == '4' || destino[22] == '4'))
			achei_linha = 3;
		else if (!(destino[25] == '4' || destino[26] == '4'
				|| destino[27] == '4' || destino[28] == '4'))
			achei_linha = 4;
		achei_coluna = 0;
		if (!(destino[7] == '4' || destino[13] == '4'
				|| destino[19] == '4' || destino[25] == '4'))
			achei_coluna = 1;
		else if (!(destino[8] == '4' || destino[14] == '4'
				|| destino[20] == '4' || destino[26] == '4'))
			achei_coluna = 2;
		else if (!(destino[9] == '4' || destino[15] == '4'
				|| destino[21] == '4' || destino[27] == '4'))
			achei_coluna = 3;
		else if (!(destino[10] == '4' || destino[16] == '4'
				|| destino[22] == '4' || destino[28] == '4'))
			achei_coluna = 4;
		if (achei_coluna != 0 && achei_linha != 0)
		{
			if (destino[(6 * achei_linha)] == '3')
			{
				if (!(destino[(6 * achei_linha) + 4] == '3'))
					destino[(6 * achei_linha) + 2] = '3';
				destino[(6 * achei_linha) + 3] = '4';
			}
			else
				destino[(6 * achei_linha) + achei_coluna] = '4';
		}
		qtde++;
	}
}

void	ft_achar4nalina(char *destino)
{
	int	qtde;

	qtde = 2;
	while (qtde <= 5)
	{
		if (destino[(6 * qtde + 3)] == '4' && destino [(6 * qtde + 2)] == '0')
			destino[(6 * qtde + 2)] = '1';
		qtde++;
	}
}

void	ft_achar1(char *destino)
{
	int	achei_linha;
	int	achei_coluna;
	int	qtde;

	qtde = 1;
	while (qtde <= 2)
	{
		achei_linha = 0;
		if (!(destino[7] == '1' || destino[8] == '1'
				|| destino[9] == '1' || destino[10] == '1'))
			achei_linha = 1;
		else if (!(destino[13] == '1' || destino[14] == '1'
				|| destino[15] == '1' || destino[16] == '1'))
			achei_linha = 2;
		else if (!(destino[19] == '1' || destino[20] == '1'
				|| destino[21] == '1' || destino[22] == '1'))
			achei_linha = 3;
		else if (!(destino[25] == '1' || destino[26] == '1'
				|| destino[27] == '1' || destino[28] == '1'))
			achei_linha = 4;
		achei_coluna = 0;
		if (!(destino[7] == '1' || destino[13] == '1'
				|| destino[19] == '1' || destino[25] == '1'))
			achei_coluna = 1;
		else if (!(destino[8] == '1' || destino[14] == '1'
				|| destino[20] == '1' || destino[26] == '1'))
			achei_coluna = 2;
		else if (!(destino[9] == '1' || destino[15] == '1'
				|| destino[21] == '1' || destino[27] == '1'))
			achei_coluna = 3;
		else if (!(destino[10] == '1' || destino[16] == '1'
				|| destino[22] == '1' || destino[28] == '1'))
			achei_coluna = 4;
		if (achei_coluna != 0 && achei_linha != 0)
		{
			if (destino[(6 * achei_linha) + achei_coluna] == '0')
				if (destino[(6 * achei_linha) + 1] == '4'
					&& destino[(6 * achei_linha) + 4] == '0')
					destino[(6 * achei_linha) + 4] = '1';
			else
				destino[(6 * achei_linha) + achei_coluna] = '1';
		}
		qtde++;
	}
}
