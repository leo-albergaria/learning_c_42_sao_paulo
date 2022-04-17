/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   definitions.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lealberg <lealberg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 19:57:01 by lealberg          #+#    #+#             */
/*   Updated: 2022/04/17 19:22:10 by lealberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINITIONS
#define DEFINITIONS

#include <unistd.h>
#include <stdio.h>

int		ft_atoi(char str);
int		sum_size(char *str);
int		sum_digit(char *str);
void	ft_error(void);
void	ft_putchar(char c);
void	ft_show_matrix(int m, char *str);
void	ft_calculator_matrix(int m, char *str);
void	ft_preencherl(char *destino);
void	ft_show_matrix_ref(int m, char *str);
void	ft_achar3(char *destino);
void	ft_achar32(char *destino);
void	ft_preencherl(char *destino);
void	ft_preencherc(char *destino);
void	ft_descobrir(char *destino);
void	ft_achar4a1(char *destino);
void	ft_achar(char *destino);
void	ft_achar4nalina(char *destino);
void	ft_achar1(char *destino);
void	ft_achar4(char *destino);
void	ft_achar4e1(char *destino);
void	ft_show_preencher(char *origem, char *destino);

#endif // DEFINITIONS