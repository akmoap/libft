/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:48:08 by mapter            #+#    #+#             */
/*   Updated: 2023/02/26 12:26:25 by mapter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

int	ft_islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

int	ft_isalnum(int c)
{
	if (ft_isupper(c) || ft_islower(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/*#include <stdio.h>
int	main(int argc, char *argv[])
{
	printf("%i", ft_isalnum(argv[1][0]));
	return 0;
}*/
