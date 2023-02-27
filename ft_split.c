/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:54:57 by mapter            #+#    #+#             */
/*   Updated: 2023/02/27 18:55:50 by mapter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
int	count_words(char const *s, char c)
{
	int	count;

	count = 1;
	while (s)
		count++;
	return (count);
}

char	*get_word(char const *s, char c)
{
	char	*word;
	
	word = (char *) malloc(s - ft_strchr(s, c));
	if (!word)
		return (0);
	ft_strlcpy(word, s, s - ft_strchr(s, c));
	return (word);
}

char	**ft_split(char const *s, char c)
{	
	char	**list;
	char	*word;
	int	word_count;
	int	i;
	int	position;

	word_count = count_words(s,c);
	list = (char **) malloc(word_count * sizeof(char *));
	if (!list)
		return (0);
	i = 0;
	word = "";
	position = -1;
	while (i < word_count)
	{
		position = position + ft_strlen(word) + 1;
		word = get_word(s + position, c);
		list[i] = word;
	}
	return (list);
}
