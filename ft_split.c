/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherraiz <rherraiz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:14:42 by rherraiz          #+#    #+#             */
/*   Updated: 2024/02/12 13:43:45 by rherraiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_counter(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static size_t	ft_numstr(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static char	**ft_free_array(const char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free((void *)array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	j;
	char	**array;
	size_t	words;

	words = ft_counter(s, c);
	i = 0;
	j = 0;
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	while (i < words)
	{
		while (*s == c)
			s++;
		j = ft_numstr((const char *)s, c);
		array[i] = (char *) malloc(sizeof(char) * (j + 1));
		if (!array[i])
			return (ft_free_array((const char **)array));
		ft_strlcpy(array[i], s, (j + 1));
		s = (ft_strchr(s, (int)c));
		i++;
	}
	array[i] = 0;
	return (array);
}
