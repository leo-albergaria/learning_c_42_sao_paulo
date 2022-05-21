/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lealberg <lealberg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 01:48:48 by lealberg          #+#    #+#             */
/*   Updated: 2022/04/10 03:28:00 by lealberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	rush(int x, int y, int typeRush);

char	*rush00(void)
{
	static char	param_lines[6];

	param_lines[0] = 'o';
	param_lines[1] = '-';
	param_lines[2] = 'o';
	param_lines[3] = '|';
	param_lines[4] = 'o';
	param_lines[5] = 'o';
	return (param_lines);
}

char	*rush02(void)
{
	static char	param_lines[6];

	param_lines[0] = 'A';
	param_lines[1] = 'B';
	param_lines[2] = 'A';
	param_lines[3] = 'B';
	param_lines[4] = 'C';
	param_lines[5] = 'C';
	return (param_lines);
}

char	*rush01(void)
{
	static char	param_lines[6];

	param_lines[0] = '/';
	param_lines[1] = '*';
	param_lines[2] = '\\';
	param_lines[3] = '*';
	param_lines[4] = '\\';
	param_lines[5] = '/';
	return (param_lines);
}

int	ft_atoi(char *str)
{
	int	result;

	result = 0;
	while (*str != '\0')
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	return ((int)(result * 1));
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;
	int	type_rush;

	if (argc > 2)
	{
		x = ft_atoi(argv[1]);
		if (x <= 0)
			return (1);
		y = ft_atoi(argv[2]);
		if (y <= 0)
			return (1);
		if (argv[3] == NULL)
			type_rush = 5;
		else if (ft_atoi(argv[3]) < 0 || ft_atoi(argv[3]) > 5)
				type_rush = 5;
		else
				type_rush = ft_atoi(argv[3]);
		rush(x, y, type_rush);
	}
	return (0);
}
