/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lealberg <lealberg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 19:43:52 by jpedro-2          #+#    #+#             */
/*   Updated: 2022/04/13 21:14:38 by lealberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int	*tab, int size)
{
	int	aux;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		if (tab[i] == j)
		{
			aux = tab[j];
			tab[j] = tab[i];
			tab[i] = aux;
			j = 0;
			i++;
		}
		else
		{
			j++;
		}
	}
}
