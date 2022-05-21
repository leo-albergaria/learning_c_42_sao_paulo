/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 06:27:18 by dbrandao          #+#    #+#             */
/*   Updated: 2022/04/21 16:18:21 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (nb == 0 && power > 0)
		return (0);
	if (nb != 0 && power == 0)
		return (1);
	while (power)
	{
		result *= nb;
		power--;
	}
	return (result);
}
