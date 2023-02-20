/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:10:07 by mapter            #+#    #+#             */
/*   Updated: 2023/02/20 11:33:41 by mapter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strdup(const char *s)
{
	char	*ptr;
	int	len;
	int	i;

	len = ft_strlen(s);
	ptr = (char *) malloc(len);
	if (!ptr)
		return (0);
	i = 0;
	while (i < len)
	{
		ptr[i] = s[i];
		i++;
	}
	return (*ptr);
}

#include <string.h>
#include <assert.h>

int main(void)
{
    const char *s1 = "String";
    char *s2 = ft_strdup(s1);
    assert(strcmp(s1, s2) == 0);
    free(s2);
}
