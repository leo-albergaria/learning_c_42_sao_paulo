/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lealberg <lealberg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 15:10:31 by lealberg          #+#    #+#             */
/*   Updated: 2022/04/17 18:39:22 by lealberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "definitions.h"

int	validar(int argc, char *argv[])
{
	int		sum_digits;
	int		sum_sizes;

	if (argc < 2)
	{
		ft_error();
		return (1);
	}
	sum_sizes = sum_size(argv[1]);
	sum_digits = sum_digit(argv[1]);
	if (!(sum_digits == 16 && sum_sizes == 32))
	{
		ft_error();
		return (1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		m;
	char	matriz[36];

	if (validar(argc, argv) == 1)
		return (1);
	i = 0;
	m = 0;
	while (argv[1][i])
	{	
		if (argv[1][i] >= '0' && argv[1][i] <= '4')
		{
			matriz[m] = argv[1][i];
			m++;
		}
		i++;
	}
	ft_calculator_matrix(m, matriz);
}
