/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 23:20:06 by mapter            #+#    #+#             */
/*   Updated: 2023/02/21 11:34:19 by mapter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptr;
	int		i;

	ptr = (char *) s;
	i = 0;
	while (i < n)
	{
		*ptr++ = c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
#include <string.h>

int main () {
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   ft_memset(str,'&', 7);
   puts(str);

   return(0);
}*/
