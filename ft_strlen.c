/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 23:12:50 by mapter            #+#    #+#             */
/*   Updated: 2023/03/08 22:32:56 by mapter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int main () {
   char str[50] = "hello";
   int len;

   //strcpy(str, "This is tutorialspoint.com");

   len = ft_strlen(str);
   printf("Length of |%s| is |%d|\n", str, len);

   return(0);
}*/
