/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:54:57 by mapter            #+#    #+#             */
/*   Updated: 2023/02/28 02:47:09 by mapter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	count_words(char const *s, char c)
{
	int	count;

	count = 1;
	while (*s)
	{
		if (*s == c && *s + 1 != c)
			count++;
		s++;
	}
	return (count);
}

char	*get_word(char const *s, char c)
{
	char	*word;
	int		len;

	if (ft_strchr(s, c))
		len = ft_strchr(s, c) - s + 1;
	else
		len = ft_strlen(s) + 1;
	word = (char *) malloc(len);
	if (!word)
		return (0);
	ft_strlcpy(word, s, len);
	return (word);
}

int	get_position(char const *s, char c)
{
	int	position;

	position = 0;
	while (ft_strchr(s, c) - s == 1)
		position++;
	return (position);
}

char	**ft_split(char const *s, char c)
{	
	char	**list;
	char	*word;
	int		word_count;
	int		i;
	int		position;

	word_count = count_words(s, c);
	list = (char **) malloc(word_count * sizeof(char *));
	if (!list)
		return (0);
	i = 0;
	word = "";
	position = -1;
	while (i < word_count)
	{
		position += ft_strlen(word);
		position = get_position(s + position, c);
		word = get_word(s + position, c);
		list[i] = word;
		i++;
	}
	return (list);
}
