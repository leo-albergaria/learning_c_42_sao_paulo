/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainC03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lealberg <lealberg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 12:03:58 by lealberg          #+#    #+#             */
/*   Updated: 2022/04/22 13:58:04 by lealberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// //#ex00
// #include <stdio.h>
// #include <unistd.h>
// #include <string.h>
// int	ft_strcmp(char *s1, char *s2);
// int main (void)
// {
//   char str1[4] = "";
//   char str2[4] = "abc";
//   int retorno;
//   retorno = strcmp(str1, str2);
//   printf("C - strcmp = retorno = %d\n", retorno);
//   char str4[4] = "";
//   char str5[4] = "abc";
//   retorno = ft_strcmp(str4, str5);
//   printf("FT_strcmp = retorno = %d\n", retorno);
//   return 0;
// }

//#ex01
// #include <stdio.h>
// #include <unistd.h>
// #include <string.h>
// int ft_strncmp(char *s1, char *s2, unsigned int n);
// int main (void)
// {
//   char str1[4] = "abd";
//   char str2[4] = "abc";
//   int retorno;
//   retorno = strncmp(str1, str2, 3);
//   printf("C - strcmp = retorno = %d\n", retorno);
//   char str4[4] = "abd";
//   char str5[4] = "abc";
//   retorno = ft_strncmp(str4, str5, 3);
//   printf("FT_strcmp = retorno = %d\n", retorno);
//   return 0;
// }

//#ex02
// #include <stdio.h>
// #include <unistd.h>
// #include <string.h>
// char *ft_strcat(char *dest, char *src);
// int main (void)
// {
//   char str[17] = "Curso";
//   strcat(str, " da 42 Sao Paulo");
//   printf("str = %s\n", str);
//   char str1[17] = "Curso";
//   ft_strcat(str1, " da 42 São Paulo");
//   printf("str = %s\n", str1);
//   return 0;
// }

//#ex03
// #include <stdio.h>
// #include <unistd.h>
// #include <string.h>
// char *ft_strncat(char *dest, char *src, unsigned int nb);
// int main (void)
// {
//   char str[17] = "Curso";
//   strncat(str, " da 42 Sao Paulo", 6);
//   printf("str = %s\n", str);
//   char str1[17] = "Curso";
//   ft_strncat(str1, " da 42 São Paulo", 6);
//   printf("str = %s\n", str1);
//   return 0;
// }

//#ex04
// #include <stdio.h>
// #include <unistd.h>
// #include <string.h>
// char *ft_strstr(char *str, char *to_find);
// int main () {
//    char txt[20] = "TutorialsPoint";
//    char find[10] = "Point";
//    char *ret;
//    ret = strstr(txt, find);
//    printf("C - Retorno é: %s\n", ret);
//    char txt1[20] = "TutorialsPoint";
//    char find1[10] = "Point";
//    char *ret1;
//    ret1 = ft_strstr(txt1, find1);
//    printf("FT - Retorno é: %s\n", ret1);
//    return(0);
// }

//#ex05
// gcc -Wall -Wextra -Werror -lbsd ../mainC03.c ft_strlcat.c ../../C02/ex00/ft_strcpy.c && ./a.out
// #include <stdio.h>
// #include <unistd.h>
// #include <string.h>
// unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
// char	*ft_strcpy(char *dest, char *src);
// int main()
// {
//     char first[] = "This is ";
//     char last[] = "a potentially flong string";
//     int r;
//     int size = 16; // 16
//     char buffer[size];
//     ft_strcpy(buffer,first);
//     r = ft_strlcat(buffer,last,size);
//     puts(buffer);
//     printf("Value returned: %d\n",r);
//     if( r > size )
//         puts("String truncated");
//     else
//         puts("String was fully copied");
//     return(0);
// }