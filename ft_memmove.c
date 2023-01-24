/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 00:07:08 by mapter            #+#    #+#             */
/*   Updated: 2023/01/24 01:08:53 by mapter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_memcpy(char *dest, const char *src, int s)
{
	int	i;

	i = 0;
	while (i < s)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_memmove(char *dest, const char *src, int n)
{
	char	*temp;
	int		i;

	ft_memcpy(temp, src, n);
	i = 0;
	while (i < n)
	{
		dest[i] = temp[i];
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int main () {
   char dest[] = "oldstring";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}*/
