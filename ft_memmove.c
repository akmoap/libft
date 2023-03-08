/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 00:07:08 by mapter            #+#    #+#             */
/*   Updated: 2023/03/08 17:19:31 by mapter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	if (!dest && !src)
		return (0);
	d = (char *) dest;
	s = (char *) src;
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		s += (n - 1);
		d += (n - 1);
		while (n--)
			*d-- = *s--;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main () {
   char dest[] = "lorem ipsum dolor sit a";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, "con\0sec\0\0te\0tur", 5);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}*/
