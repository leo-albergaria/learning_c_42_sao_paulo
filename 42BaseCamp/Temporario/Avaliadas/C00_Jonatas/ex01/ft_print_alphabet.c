/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonolive <jonolive@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 22:10:03 by jonolive          #+#    #+#             */
/*   Updated: 2022/04/10 20:48:24 by jonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alf;

	alf = 'a';
	while (alf <= 'z')
	{
		write(1, &alf, 1);
		alf++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
}
*/