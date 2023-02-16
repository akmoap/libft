/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:05:52 by mapter            #+#    #+#             */
/*   Updated: 2023/02/16 02:06:09 by mapter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_calloc(int number, int size)
{
	void	*ptr;
	int		n;

	n = 0;
	if (number == 0 || size == 0)
	{
		number = 1;
		size = 1;
	}
	ptr = malloc(number * size);
	if (!*ptr)
		return (0);
	while (n < number * size)
	{
		ptr[n] = 0;
		n++;
	}
	return (ptr);
}
