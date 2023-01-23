/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:38:37 by mapter            #+#    #+#             */
/*   Updated: 2023/01/23 11:25:05 by mapter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	isalpha(int c)
{
	if (isupper(c) || islower(c))
		return (1);
	return (0);
}

/*#include <stdio.h>
int	main(int argc, char *argv[])
{
	printf("%i", isalpha(argv[1][0]));
	return 0;
}*/
