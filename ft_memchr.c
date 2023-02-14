/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:56:27 by mapter            #+#    #+#             */
/*   Updated: 2023/02/14 12:29:44 by mapter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const char *str, int c, int n)
{
	int	i;

	i = 0;
	while (*str && i < n)
	{
		if (*str == c)
		{
			return ((char *) str);
		}
		str++;
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = 'a';
   char *ret;

   ret = ft_memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}*/
