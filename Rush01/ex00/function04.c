/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function04.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lealberg <lealberg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:55:31 by lealberg          #+#    #+#             */
/*   Updated: 2022/04/17 19:01:11 by lealberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "definitions.h"

void	ft_achar3(char *destino)
{
	if (destino[6] == '3' && destino[1] == '3')
		destino[7] = '2';
}

void	ft_achar32(char *destino)
{
	if (destino[12] == '3' && destino[6] == '2' && destino[13] == '0')
		destino[13] = '2';
	if (destino[18] == '3' && destino[12] == '2' && destino[19] == '0')
		destino[19] = '2';
}

void	ft_preencherl(char *destino)
{
	int	l;
	int	unid;
	int	qunid;
	int	soma;

	l = 1;
	while (l <= 4)
	{
		unid = 0;
		soma = 0;
		qunid = 0;
		if (destino[6 * l + 1] == '0')
		{
			unid = 6 * l + 1;
			qunid++;
		}
		soma += ft_atoi(destino[6 * l + 1]);
		if (destino[6 * l + 2] == '0')
		{
			unid = 6 * l + 2;
			qunid++;
		}
		soma += ft_atoi(destino[6 * l + 2]);
		if (destino[6 * l + 3] == '0')
		{
			unid = 6 * l + 3;
			qunid++;
		}
		soma += ft_atoi(destino[6 * l + 3]);
		if (destino[6 * l + 4] == '0')
		{
			unid = 6 * l + 4;
			qunid++;
		}
		soma += ft_atoi(destino[6 * l + 4]);
		if (qunid == 1)
		{
			destino[unid] = 10 - soma + '0';
		}
		l++;
	}
}

void	ft_preencherc(char *destino)
{
	int	c;
	int	unid;
	int	qunid;
	int	soma;

	c = 1;
	while (c <= 4)
	{
		unid = 0;
		soma = 0;
		qunid = 0;
		if (destino[6 + c] == '0')
		{
			unid = 6 + c;
			qunid++;
		}
		soma += ft_atoi(destino[6 + c]);
		if (destino[12 + c] == '0')
		{
			unid = 12 + c;
			qunid++;
		}
		soma += ft_atoi(destino[12 + c]);
		if (destino[18 + c] == '0')
		{
			unid = 18 + c;
			qunid++;
		}
		soma += ft_atoi(destino[18 + c]);
		if (destino[24 + c] == '0')
		{
			unid = 24 + c;
			qunid++;
		}
		soma += ft_atoi(destino[24 + c]);
		if (qunid == 1)
		{
			destino[unid] = 10 - soma + '0';
		}
		c++;
	}
}
