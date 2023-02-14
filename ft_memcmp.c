/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:33:53 by mapter            #+#    #+#             */
/*   Updated: 2023/01/26 12:57:21 by mapter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
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
