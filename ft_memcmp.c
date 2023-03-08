/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:33:53 by mapter            #+#    #+#             */
/*   Updated: 2023/03/08 17:26:35 by mapter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *) s1;
	ss2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (ss1[i] < ss2[i])
			return (-1);
		else if (ss1[i] > ss2[i])
			return (1);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("%i\n", ft_memcmp("he\0\0llo", "he\0\0alo", 5));
	return 0;
}*/
