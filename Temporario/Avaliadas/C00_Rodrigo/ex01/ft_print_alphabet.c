/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-b <ralves-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:25:11 by ralves-b          #+#    #+#             */
/*   Updated: 2022/04/08 00:46:06 by ralves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alfabeto;

	alfabeto = 'a';
	while (alfabeto != '{')
	{
		write(1, &alfabeto, 1);
		alfabeto++;
	}
}
