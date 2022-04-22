/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 00:35:35 by ralves-b          #+#    #+#             */
/*   Updated: 2022/04/10 02:16:48 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	alfabeto;

	alfabeto = '0';
	while (alfabeto <= '9')
	{
		write(1, &alfabeto, 1);
		alfabeto++;
	}
}
