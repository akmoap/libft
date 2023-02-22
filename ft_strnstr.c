/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:31:09 by mapter            #+#    #+#             */
/*   Updated: 2023/02/22 01:34:19 by mapter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len && *big)
	{
		j = 0;
		while (big[j] == little[j] || !little[j])
		{
			if (!little[j])
				return ((char *) big);
			j++;
		}
		i++;
		big++;
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

   return(0);
}*/
