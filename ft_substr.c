/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherraiz <rherraiz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:13:39 by rherraiz          #+#    #+#             */
/*   Updated: 2024/02/08 18:26:27 by rherraiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ft_substr devuelve una subcadena con los caracteres de start a len
 233   │  *
 234   │  * reserva con malloc y devuelve una substring de la string 's'.
 235   │  * la substring empieza desde el indice 'start' y tiene una longitud 
 236   │  * maxima de 'len'.
 237   │  *
 devuelve la substring resultante o null si falla la reserva de memoria.
 239   │  *
 240   │  * s -> La string desde la que crear la substring.
 * start -> el indice del caracter en 's' desde el que empezar la substring.
 242   │  * len -> la longitud maxima de la substring.
 243   │  *
 244   │  * 
*/
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	str = (char *)s;
	if (!str)
	{
		return (NULL);
	}
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	str = malloc((ft_strlen(s) + 1) * sizeof(*s));
	while (s[i] != '\0')
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char str[] = "";
	unsigned int start = 0;
	size_t len = 0;

	printf("%s",ft_substr(str,start,len));
}
*/
