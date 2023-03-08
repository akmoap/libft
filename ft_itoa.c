/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 10:29:52 by mapter            #+#    #+#             */
/*   Updated: 2023/03/08 17:43:28 by mapter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	amount_numbers(int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		i++;
		n = n / 10;
	}
	if (i == 0)
		i = 1;
	return (i);
}

char	*fill(char *str, int n, int i, int negative)
{
	int	j;

	if (negative)
		str[0] = '-';
	j = 0;
	while (j < i)
	{
		str[i + negative - j - 1] = (n % 10) + 48;
		n = n / 10;
		j++;
	}
	if (i > 1 && str[1] == '0' && negative)
		str[1] = '2';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		negative;

	negative = 0;
	i = 0;
	if (n < 0)
	{
		negative = 1;
		if (n == -2147483648)
		{
			n = -147483648;
			i++;
		}
		n = n * -1;
	}
	i += amount_numbers(n);
	str = (char *) malloc(i + negative + 1);
	if (!str)
		return (0);
	ft_bzero(str, i + negative + 1);
	fill(str, n, i, negative);
	return (str);
}
