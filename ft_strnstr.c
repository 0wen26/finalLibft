/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherraiz <rherraiz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:02:11 by rherraiz          #+#    #+#             */
/*   Updated: 2024/01/18 19:04:10 by rherraiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	len_s2;

	i = 0;
	j = 0;
	len_s2 = ft_strlen(s2);
	if (*s2 == 0 || s1 == s2)
		return ((char *)s1);
	while (s1[i] != '\0' && i < n)
	{
		j = 0;
		while (s1[i + j] != '\0' && s2[j] != '\0'
			&& s1[i + j] == s2[j] && i + j < n)
			j++;
		if (j == len_s2)
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}
