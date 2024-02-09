/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherraiz <rherraiz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:40:38 by rherraiz          #+#    #+#             */
/*   Updated: 2024/02/09 16:45:30 by rherraiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

#include <stdio.h>

static  size_t ft_counter(char const *s, char c)
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


static size_t	ft_numStr(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}


/*
char	**ft_split(char const *s, char c)
{


}
*/

int main()
{
	char const s[] = "  Hola    que     tal    ";
	char c = ' ';

	printf("%lu", ft_counter(s,c));
	return 0;
}
