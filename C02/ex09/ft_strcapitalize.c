/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lealberg <lealberg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:35:31 by lealberg          #+#    #+#             */
/*   Updated: 2022/04/19 23:46:33 by lealberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
		str[i - 1] = str[i - 1] - 32;
	while (str[i])
	{
		if (!((str[i - 1] >= 'a' && str[i - 1] <= 'z')	|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else
		{	
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}