/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:48:08 by mapter            #+#    #+#             */
/*   Updated: 2023/01/23 11:51:26 by mapter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int	isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

int	islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

int	isalnum(int c)
{
	if (isupper(c) || islower(c) || isdigit(c))
		return (1);
	return (0);
}

/*#include <stdio.h>
int	main(int argc, char *argv[])
{
	printf("%i", isalnum(argv[1][0]));
	return 0;
}*/
