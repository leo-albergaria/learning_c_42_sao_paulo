/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lealberg <lealberg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 13:13:17 by lealberg          #+#    #+#             */
/*   Updated: 2022/04/15 14:07:12 by lealberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while(str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while(str[i + j] == to_find[j])
			{
				j++;
				if (!(to_find[j]))
					return (&str[i]);
			}
		}
		i++;	
	}
	return (0);
}
