/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 23:52:35 by mapter            #+#    #+#             */
/*   Updated: 2023/01/24 00:02:28 by mapter           ###   ########.fr       */
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

/*#include <stdio.h>
#include <string.h>

int main () {
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50];
   strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);

   return(0);
}*/
