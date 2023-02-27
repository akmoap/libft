/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:31:09 by mapter            #+#    #+#             */
/*   Updated: 2023/02/26 22:42:40 by mapter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	j;

	if (len < ft_strlen(to_find))
		return (0);
	len = len - ft_strlen(to_find) + 1;
	if (!*to_find)
		return ((char *) str);
	while (len > 0 && *str)
	{
		/*if (*str == *to_find && ft_memcmp(str, to_find, ft_strlen(to_find) == 0))
			return ((char *) str);
	*/
		j = 0;
		while (str[j] == to_find[j] || !to_find[j])
		{
			if (!to_find[j])
				return ((char *) str);
			j++;
		}
		str++;
		len--;
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
