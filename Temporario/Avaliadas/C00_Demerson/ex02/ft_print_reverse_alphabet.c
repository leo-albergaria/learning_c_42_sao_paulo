/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 21:03:06 by coder             #+#    #+#             */
/*   Updated: 2022/04/11 21:12:22 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{	
	char	z;

	z = 'z';
	while (z >= 97)
	{
		write (1, &z, 1);
		z--;
	}
}
