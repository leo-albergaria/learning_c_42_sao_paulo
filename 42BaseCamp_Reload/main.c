/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lealberg <lealberg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 21:01:25 by lealberg          #+#    #+#             */
/*   Updated: 2022/05/22 15:30:20 by lealberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	ft_is_negative();
void	ft_ft();
void	ft_swap();
void	ft_div_mod(int a, int b, int *div, int *mod);
int		ft_iterative_factorial(int nb);
int		ft_recursive_factorial(int nb);
int		ft_sqrt(int nb);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_print_params(char *str);
void	ft_print_alphabet();
void	ft_print_numbers();
void	ft_putchar(char *str);
void	ft_putstr(char *str);
void	ft_putmain_args(int argc, char *argv[]);

int		main(int argc, char *argv[])
{
	//ex06
	// ft_print_alphabet();

	//ex07
	// ft_print_numbers();

	//ex08
	// ft_is_negative(-8);

	//ex09
    // int a = 24;
    // printf("Valor antes: %d\n", a);
    // ft_ft(&a);
    // printf("Valor depois: %d\n", a);

	//ex10
	// int x = 777;
    // int y = 1024;
    // printf("X antes: %d\n", x);
    // printf("Y antes: %d\n", y);
    // ft_swap(&x, &y);
    // printf("\nX depois: %d\n", x);
    // printf("Y depois: %d\n", y);

	//ex11
    // int x = 25;
    // int y = 3;
    // int resul = 666;
    // int resto = 777;
    // printf("Valor de x: %d\n" ,x);
    // printf("Valor de y:%d\n" ,y);
    // printf("Valor arbitrário resul: %d\n" ,resul);
    // printf("Valor arbitrário do resto: %d\n" ,resto);
    // ft_div_mod(x, y, &resul, &resto);
    // printf("\nResultado divisão:%d\n" ,resul);
    // printf("Resto: %d\n" ,resto);


	//ex12
	// int x = 5;
	// printf("Fatorial Iterative de %d é %d\n", x, ft_iterative_factorial(x));


	//ex13
	// int x = 5;
	// printf("Fatorial Recusive de %d é %d\n", x, ft_recursive_factorial(x));

	//ex14
	// int x = 81;
	// printf("Raiz de %d é/são %d\n", x, ft_sqrt(x));

	//ex15
	// ft_putstr("Olá meu rei\n");

	//ex16
	// printf("Quantidade de caracteres é/são: %d\n", ft_strlen("Aqui"));

	//ex17
	// char str1[4] = "";
	// char str2[4] = "abc";
	// int retorno;
	// retorno = strcmp(str1, str2);
	// printf("C - strcmp = retorno = %d\n", retorno);
	// char str4[4] = "";
	// char str5[4] = "abc";
	// retorno = ft_strcmp(str4, str5);
	// printf("FT_strcmp = retorno = %d\n", retorno);

	//ex18
	// int i = 1;
	// while (i < argc)
	// {
	// 	ft_print_params(argv[i]);
	// 	i++;		
	// }

	//ex19
	int		index;
	int		index2;
	char	*aux;

	index = 1;
	index2 = 1;
	while (index < argc)
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
		index++;
	}
	ft_putmain_args(argc, argv);

}
