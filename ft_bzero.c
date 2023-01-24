/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 23:35:49 by mapter            #+#    #+#             */
/*   Updated: 2023/01/23 23:41:05 by mapter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(char *s, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		s[i] = '/0';
		i++;
	}
}

/*#include <stdio.h>
#include <string.h>

int main () {
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   ft_bzero(str, 7);
   puts(str);

   return(0);
}*/
