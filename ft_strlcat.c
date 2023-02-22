/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: mapter <marvin@42.fr>			    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/01/25 12:53:16 by mapter	       #+#    #+#	      */
/*   Updated: 2023/02/21 22:50:12 by mapter           ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dest);
	j = 0;
	while (j + i < n && src[i] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + ft_strlen(src));
}
/*
#include <stdio.h>
#include <string.h>

int main () {
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50];
   int i = ft_strlcat(dest,"Heloooo!!", 15);
   printf("Before memcpy dest = %i %s\n", i, dest);
   i = ft_strlcat(dest, src, 15);
   printf("After memcpy dest = %i %s\n", i, dest);

   return(0);
}*/
