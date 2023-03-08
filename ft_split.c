/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapter <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:54:57 by mapter            #+#    #+#             */
/*   Updated: 2023/03/08 17:40:44 by mapter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	free_words(char	**list, int i)
{
	while (i >= 0)
	{
		free(list[i]);
		i--;
	}
	free(list);
}

char	**ft_split(char const *s, char c)
{	
	char	**list;
	int		word_count;
	int		i;

	word_count = count_words(s, c);
	list = (char **) malloc((word_count + 1) * sizeof(char *));
	if (!list)
		return (0);
	i = 0;
	while (i < word_count)
	{
		while (*s == c)
			s++;
		list[i] = get_word(s, c);
		if (!list[i])
		{
			free_words(list, i - 1);
			return (0);
		}
		s = s + ft_strlen(list[i]);
		i++;
	}
	list[i] = (char *) '\0';
	return (list);
}
