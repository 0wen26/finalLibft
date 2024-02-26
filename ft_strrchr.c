/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherraiz <rherraiz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:04:32 by rherraiz          #+#    #+#             */
/*   Updated: 2024/02/12 14:00:41 by rherraiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*s;	
	char	j;

	j = (char) c;
	s = (char *) str;
	i = ft_strlen(s);
	if (j == '\0')
		return (s + ft_strlen(s));
	while (i >= 0)
	{
		if (s[i] == j)
			return (s + i);
		i--;
	}
	return (NULL);
}
