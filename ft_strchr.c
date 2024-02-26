/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherraiz <rherraiz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:26:22 by rherraiz          #+#    #+#             */
/*   Updated: 2024/02/12 13:44:33 by rherraiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 

char	*ft_strchr(const char *str, int c)
{
	char	*s;
	int		i;
	char	j;

	s = (char *) str;
	i = 0;
	j = (char ) c;
	while (s[i] != '\0')
	{
		if (s[i] == j)
			return (s + i);
		i++;
	}
	if (s[i] == '\0' && j == '\0')
		return (s + i);
	return (NULL);
}
