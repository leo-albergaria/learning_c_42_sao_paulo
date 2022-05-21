/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lealberg <lealberg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 01:58:32 by lealberg          #+#    #+#             */
/*   Updated: 2022/04/10 03:24:34 by lealberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
char	*rush00(void);
char	*rush01(void);
char	*rush02(void);

char	*rush03(void)
{
	static char	param_lines[6];

	param_lines[0] = 'A';
	param_lines[1] = 'B';
	param_lines[2] = 'C';
	param_lines[3] = 'B';
	param_lines[4] = 'A';
	param_lines[5] = 'C';
	return (param_lines);
}

char	*rush04(void)
{
	static char	param_lines[6];

	param_lines[0] = 'A';
	param_lines[1] = 'B';
	param_lines[2] = 'C';
	param_lines[3] = 'B';
	param_lines[4] = 'C';
	param_lines[5] = 'A';
	return (param_lines);
}

void	press_line(int x, int letter_header, int letter_boddy, int letter_end)
{
	int	i;

	ft_putchar(letter_header);
	i = 1;
	while (i < x - 1)
	{
		ft_putchar(letter_boddy);
		i++;
	}
	if (x != 1)
		ft_putchar(letter_end);
	ft_putchar('\n');
}

void	rush(int x, int y, int type)
{
	char	*param_lines;
	int		j;

	if (type == 0)
		param_lines = rush00();
	if (type == 1)
		param_lines = rush01();
	if ((type == 2) || (type == 5))
		param_lines = rush02();
	if (type == 3)
		param_lines = rush03();
	if (type == 4)
		param_lines = rush04();
	j = 1;
	press_line(x, param_lines[0], param_lines[1], param_lines[2]);
	while (j <= y - 2)
	{
		press_line(x, param_lines[3], ' ', param_lines[3]);
		j++;
	}		
	if (y != 1)
		press_line(x, param_lines[4], param_lines[1], param_lines[5]);
}
