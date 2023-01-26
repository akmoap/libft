/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: mapter <marvin@42.fr>			    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/01/25 23:10:49 by mapter	       #+#    #+#	      */
/*   Updated: 2023/01/26 11:49:32 by mapter           ###   ########.fr       */
/*									      */
/* ************************************************************************** */

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	str = str + i;
	while (i >= 0)
	{
		if (*str == c)
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
   const char ch = 'z';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}*/
