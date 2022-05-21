/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainC01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lealberg <lealberg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 20:52:01 by lealberg          #+#    #+#             */
/*   Updated: 2022/04/15 17:16:46 by lealberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

//#ex00
// int main()
// {
//     int    a = 24;
//     printf("Valor antes: %d\n", a);
//     ft_ft(&a);
//     printf("Valor aepois: %d\n", a);
// }

//#ex01
// int        main(void)
// {
//     int a = 999;
//     int *ptr1 = &a;
//     int **ptr2 = &ptr1;
//     int ***ptr3 = &ptr2;
//     int ****ptr4 = &ptr3;
//     int *****ptr5 = &ptr4;
//     int ******ptr6 = &ptr5;
//     int *******ptr7 = &ptr6;
//     int ********ptr8 = &ptr7;
//     int *********ptr9 = &ptr8;
//     printf("Antes: %d\n", a);
//     ft_ultimate_ft(ptr9);
//     printf("Depois: %d\n", a);
// }

// #ex02
// int main()
// {
//     int x = 777;
//     int y = 1024;
//     printf("X antes: %d\n", x);
//     printf("Y antes: %d\n", y);
//     ft_swap(&x, &y);
//     printf("\nX depois: %d\n", x);
//     printf("Y depois: %d\n", y);
// }

//#ex03
// int    main()
// {
//     int x = 25;
//     int y = 3;
//     int resul = 666;
//     int resto = 777;
//     printf("Valor de x: %d\n" ,x);
//     printf("Valor de y:%d\n" ,y);
//     printf("Valor arbitrário resul: %d\n" ,resul);
//     printf("Valor arbitrário do resto: %d\n" ,resto);
//     ft_div_mod(x, y, &resul, &resto);
//     printf("\nResultado divisão:%d\n" ,resul);
//     printf("Resto: %d\n" ,resto);
// }

//#ex04
// int main()
// {
//     int x = 91;
//     int y = 15;
//     ft_ultimate_div_mod(&x, &y);
//     printf("Resultado da divisão: %d\n", x);
//     printf("Resto: %d\n", y);
// }

//#ex05
// void	ft_putstr(char *str);
// int        main(void)
// {
//     char string[] = "lampada";
//     char *ptr = &string[0];
//     ft_putstr(ptr);
//     ft_putstr("Ola\n");
// 	return 0;
// }

// #ex06
// int	ft_strlen(char *str);
// int	main(void)
// {
// 	int x = ft_strlen("Perfeitamente Ola\n");
// 	printf("%d", x);
// 	return 0;
// }

// #ex07
// #include <stdio.h>
// void ft_rev_int_tab(int *tab, int size);
// void putarr(int arr[], int size)
// {
// 	int i = 0;
// 	while (i < size-1)
// 	{
// 		printf("%d, ", arr[i]);
// 		i++;
// 	}
// 	printf("%d\n", arr[size-1]);
// }
// int main(void)
// {
// 	int tab[] = {1, 2, 3, 4};
// 	int size;
// 	size = 4;
// 	printf("Origem: ");
// 	putarr(tab, size);
// 	ft_rev_int_tab(tab, size);
// 	printf("Modificada: ");
// 	putarr(tab, size);
// 	return 0;
// }

//#ex08#include <stdio.h>
// void    ft_sort_int_tab(int *tab, int size);
// int  main(void)
// {
//   int size = 10;
//   int a[size] = {7, 3, 1, 0, 8, 6, 9, 5, 2, 4};
//   int *tab = &a[0];
  
//   printf("Array Inicial -> ");
//   while (i < size)
//   {
//     printf("%i", a[i]);
//   }
//   printf("\n");  
//   ft_sort_int_tab(tab, size);
//   printf("Array Organizada -> ");
//   int i = 0;
//   while (i < size)
//   {
//     printf("%i", a[i]);
//   }
//   printf("\n");  
//   return (0);
// }

