/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: mapter <marvin@42.fr>			    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/01/25 23:10:49 by mapter	       #+#    #+#	      */
/*   Updated: 2023/02/26 18:11:07 by mapter           ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	str = str + i;
	while (i >= 0)
	{
		if (*str == (char) c)
			return ((char *) str);
		str--;
		i--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main () {
	int len;
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '\0';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}*/
