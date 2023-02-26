/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 00:07:08 by mapter            #+#    #+#             */
/*   Updated: 2023/02/26 13:18:13 by mapter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	char	*temp;
	size_t	i;

	d = (char *) dest;
	s = (char *) src;
	temp = "";
	if (d < s)
		return (ft_memcpy(d, s, n));
	i = 0;
	while (i < n)
	{
		temp[i] = s[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		d[i] = temp[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main () {
   char dest[] = "oldstring";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, "con\0sec\0\0te\0tur", 10);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}*/
