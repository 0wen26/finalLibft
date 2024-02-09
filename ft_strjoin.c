/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherraiz <rherraiz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:02:11 by rherraiz          #+#    #+#             */
/*   Updated: 2024/01/31 05:18:26 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ft_strjoin reserva con malloc y devuelve una nueva string, formada 
 248   │  * por la cocatenacion de 's1' y 's2'.
 249   │  *
 250   │  * devuelve la nueva string o null si falla la reserva de memoria.
 251   │  *
 252   │  * s1 -> la primera string.
 253   │  * s2 -> la string a añadir a 's1'.
 254   │  *
 255   │  
*/

#include "libft.h"
/*
char	*ft_concat(char *str, char const *s1, int i)
{
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	return (str);
}
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*str;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1, len1 + len2 + 1);
	ft_strlcpy(str + len1, s2, len2 + 1);
	return (str);
}
