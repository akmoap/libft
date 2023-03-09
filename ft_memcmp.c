/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:33:53 by mapter            #+#    #+#             */
/*   Updated: 2023/03/09 01:39:46 by mapter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		a;

	i = 0;
	a = 0;
	while (i < n && !a)
	{
		a = *(const unsigned char *)(s1 + i) - *(const unsigned char *)(s2 + i);
		i++;
	}
	return (a);
}
/*
#include <stdio.h>
int main()
{
	printf("%i\n", ft_memcmp("he\0\0llo", "he\0\0alo", 5));
	return 0;
}*/
