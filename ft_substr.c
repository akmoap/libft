/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 01:05:40 by mapter            #+#    #+#             */
/*   Updated: 2023/03/02 02:11:35 by mapter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	if (len > ft_strlen(s))
		len = ft_strlen(s);
	dest = (char *) malloc(len + 1);
	if (!dest)
		return (0);
	ft_bzero(dest, len + 1);
	if (start > ft_strlen(s))
		return (dest);
	i = 0;
	while (i < start)
	{
		s++;
		i++;
	}
	return (ft_memcpy(dest, s, len));
}
/*
#include <stdio.h>
void	main()
{
	char *str = "01234";
 	size_t size = 10;
 	char *ret = ft_substr(str, 10, size);
	printf(".%s.\n", ret);
}*/
