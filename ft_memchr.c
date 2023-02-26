/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:56:27 by mapter            #+#    #+#             */
/*   Updated: 2023/02/26 12:14:56 by mapter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	unsigned char   comp;

	s = (unsigned char *) str;
	comp = (unsigned char) c;
	while (n > 0)
	{
		if (*s == comp)
		{
			return ((void *) s);
		}
		s++;
		n--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = 't';
   char *ret;

   ret = ft_memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
   int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
    printf("%s", (char *)memchr(tab, -1, 7));
	return (0);
}*/
