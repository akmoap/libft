/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:31:09 by mapter            #+#    #+#             */
/*   Updated: 2023/02/27 16:41:28 by mapter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;

	if (!str && !len)
		return (0);
	if (len < ft_strlen(to_find))
		return (0);
	len = len - ft_strlen(to_find) + 1;
	if (!*to_find)
		return ((char *) str);
	i = 0;
	while (i < len && str[i])
	{
		if (str[i] == to_find[0])
			if (ft_memcmp(&str[i], to_find, ft_strlen(to_find)) == 0)
				return ((char *)(str + i));
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
           const char *largestring = "Foo Bar Baz";
           const char *smallstring = " Ba";
           char *ptr;
	ptr = ft_strnstr(largestring, smallstring, 10);
   printf("String after |%s| is - |%s|\n", smallstring, ptr);
   //ptr = strnstr(((void*)0), "fake", 3);

   return(0);
}*/
