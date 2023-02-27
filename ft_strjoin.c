/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:15:59 by mapter            #+#    #+#             */
/*   Updated: 2023/02/27 17:11:47 by mapter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1l;
	size_t	s2l;

	s1l = ft_strlen(s1);
	s2l = ft_strlen(s2);
	str = (char *) malloc(s1l + s2l + 1);
	if (!str)
		return (0);
	ft_bzero(str, s1l + s2l + 1);
	if (s1l > 0)
		ft_strlcat(str, s1, s1l + 1);
	if (s2l > 0)
		ft_strlcat(str, s2, s1l + s2l + 1);
	return (str);
}
/*
#include <stdio.h>
void	main()
{
	printf("%s\n", ft_strjoin("abcd", "efghi"));
}*/
