/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lealberg <lealberg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:16:23 by lealberg          #+#    #+#             */
/*   Updated: 2022/05/24 00:50:24 by lealberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str++);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

void	ft_putmain_args(int argc, char *argv[])
{
	int	index;

	index = 1;
	while (index < argc)
	{
		ft_putstr(argv[index]);
		ft_putchar('\n');
		index++;
	}
}

int	main(int argc, char *argv[])
{
	int		index1;
	int		index2;
	char	*aux;

	index1 = 1;
	index2 = 1;
	while (index1 < argc)
	{
		while (index2 < argc - 1)
		{
			if (ft_strcmp(argv[index2], argv[index2 + 1]) > 0)
			{
				aux = argv[index2];
				argv[index2] = argv[index2 + 1];
				argv[index2 + 1] = aux;
			}
			index2++;
		}
		index2 = 1;
		index1++;
	}
	ft_putmain_args(argc, argv);
}
