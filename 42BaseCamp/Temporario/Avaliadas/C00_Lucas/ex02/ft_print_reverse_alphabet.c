/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalucas- <jalucas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:37:16 by jalucas-          #+#    #+#             */
/*   Updated: 2022/04/12 16:39:39 by jalucas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* descrição: programa para printar o alphabeto [A-Z]
ASCII numero de A=65 ; Z 90
ASCII numero de a=97 ; z 122
*/
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	while (c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
}
