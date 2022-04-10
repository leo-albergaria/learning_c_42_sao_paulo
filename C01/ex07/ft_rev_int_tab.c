/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lealberg <lealberg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 17:50:13 by lealberg          #+#    #+#             */
/*   Updated: 2022/04/10 18:51:20 by lealberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int count;
	int	temp[size];

	i = size - 1;
	count = 0;
	while (i >= 0)
	{
		temp[count] = tab[i];
		i--;
		count++;
	}
	
	count = 0;
	while (count < size)
	{
		tab[count] = temp[count];
		count++;
	}
}
