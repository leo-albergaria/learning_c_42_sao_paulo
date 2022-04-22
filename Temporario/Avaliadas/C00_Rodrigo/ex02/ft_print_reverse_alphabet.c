/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:44:57 by ralves-b          #+#    #+#             */
/*   Updated: 2022/04/08 00:40:24 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alfabeto;

	alfabeto = 'z';
	while (alfabeto != '`')
	{
		write(1, &alfabeto, 1);
		alfabeto--;
	}
}
