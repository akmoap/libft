/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 23:20:06 by mapter            #+#    #+#             */
/*   Updated: 2023/01/23 23:29:29 by mapter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_memset(char *s, int c, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		s[i] = c;
		i++;
	}
	return (s);
}

/*#include <stdio.h>
#include <string.h>

int main () {
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   ft_memset(str,'.', 15);
   puts(str);

   return(0);
}*/
