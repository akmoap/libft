/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:31:09 by mapter            #+#    #+#             */
/*   Updated: 2023/02/14 12:56:14 by mapter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *little, int len)
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

#include <stdio.h>
int	main()
{
           const char *largestring = "Foo Bar Baz";
           const char *smallstring = "Bag";
           char *ptr;
	ptr = ft_strnstr(largestring, smallstring, 10);
   printf("String after |%s| is - |%s|\n", smallstring, ptr);

   return(0);
}
