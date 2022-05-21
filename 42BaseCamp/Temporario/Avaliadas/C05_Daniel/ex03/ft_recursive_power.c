/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 05:44:02 by dbrandao          #+#    #+#             */
/*   Updated: 2022/04/21 16:18:31 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (nb == 0 && power > 0)
		return (0);
	if (nb != 0 && power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
