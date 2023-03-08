/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:10:07 by mapter            #+#    #+#             */
/*   Updated: 2023/03/08 17:35:03 by mapter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		len;

	len = ft_strlen(s) + 1;
	ptr = (char *) malloc(len);
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, s, len);
	return (ptr);
}
/*
#include <string.h>
#include <assert.h>

int main(void)
{
    const char *s1 = "String";
    char *s2 = ft_strdup(s1);
    assert(strcmp(s1, s2) == 0);
    free(s2);
}*/
