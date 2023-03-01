/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:54:57 by mapter            #+#    #+#             */
/*   Updated: 2023/03/01 16:39:15 by mapter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	count_words(char const *s, char c)
{
	int	count;
	int	started;

	count = 0;
	started = 0;
	while (*s)
	{
		if (!started && *s != c && *s != '\0')
			started = 1;
		if (*s == c && *(s + 1) != c && *(s + 1) != '\0' && started)
			count++;
		s++;
	}
	if (started)
		count++;
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

char	**ft_split(char const *s, char c)
{	
	char	**list;
	char	*word;
	int		word_count;
	int		i;

	word_count = count_words(s, c);
	list = (char **) malloc((word_count + 1) * sizeof(char *));
	if (!list)
		return (0);
	i = 0;
	word = "";
	while (i < word_count)
	{
		while (*s == c)
			s++;
		word = get_word(s, c);
		list[i] = word;
		s = s + ft_strlen(word);
		i++;
	}
	list[i] = (char *) '\0';
	return (list);
}
