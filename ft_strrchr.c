/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherraiz <rherraiz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:04:32 by rherraiz          #+#    #+#             */
/*   Updated: 2024/01/30 03:27:51 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ft_strrchr se utiliza para buscar la ultima aparicion de
 131   │  * un caracter especifico en una cadena de caracteres.
 132   │  * si se encuentra el caracter devuelve un puntero a la posicion
 133   │  * del caracter en la cadena, de lo contrario devuelve null.
 134   │  *
 135   │  * str -> puntero a la cadena en la que se realiza la busqueda
 136   │  * c -> caracter que se esta buscando.
 137   │  *
*/
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
