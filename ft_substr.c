/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherraiz <rherraiz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:13:39 by rherraiz          #+#    #+#             */
/*   Updated: 2024/02/12 12:06:08 by rherraiz         ###   ########.fr       */
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

	i = 0;
	if (s == NULL)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if ((ft_strlen(s) - start) <= len)
		str = (char *)malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	else
		str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (s[i + start] != '\0' && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
