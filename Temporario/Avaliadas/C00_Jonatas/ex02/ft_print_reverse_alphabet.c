/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonolive <jonolive@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 22:30:13 by jonolive          #+#    #+#             */
/*   Updated: 2022/04/10 20:49:40 by jonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alfr;

	alfr = 'z';
	while (alfr >= 'a')
	{
		write(1, &alfr, 1);
		alfr--;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
}
*/