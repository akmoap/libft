/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: mapter <marvin@42.fr>			    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/01/25 12:53:16 by mapter	       #+#    #+#	      */
/*   Updated: 2023/01/25 21:47:17 by mapter           ###   ########.fr       */
/*									      */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strlcat(char *dest, const char *src, int n)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (j < n && src[i] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i);
}

/*#include <stdio.h>
#include <string.h>

int main () {
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50];
   ft_strlcat(dest,"Heloooo!!", 15);
   printf("Before memcpy dest = %s\n", dest);
   ft_strlcat(dest, src, 15);
   printf("After memcpy dest = %s\n", dest);

   return(0);
}*/
