/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lealberg <lealberg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:32:56 by lealberg          #+#    #+#             */
/*   Updated: 2022/04/18 14:41:53 by lealberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	src_size;
	unsigned int	dest_size;

	src_size = 0;
	while (src[src_size])
		src_size++;
	if (size == 0)
		return (src_size);
	dest_size = 0;
	while (dest[dest_size])
		dest_size++;
	i = 0;
	while (size && (--size - dest_size) && src[i])
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest_size + src_size);
}
