/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: mapter <marvin@42.fr>			    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/01/25 12:53:16 by mapter	       #+#    #+#	      */
/*   Updated: 2023/03/08 22:33:34 by mapter           ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dest);
	j = 0;
	if (n > 0)
	{
		while (j + i < n - 1 && src[j] != '\0')
		{
			dest[i + j] = src[j];
			j++;
		}
		dest[i + j] = '\0';
	}
	if (i > n)
		i = n;
	return (i + ft_strlen(src));
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
   const char src[50] = "http://www.tutorialspoint.com";
   char *dest = (char *) malloc(15);
   dest[10] = 'a';
   //memset(dest, 'r', 15);
   int i = ft_strlcat(dest, "lorem ipsum dolor sit amet", 1);
   //int i = ft_strlcat(dest,"Heloooo!!", 0);
   printf("%i %s\n", i, dest);

   return(0);
}*/
