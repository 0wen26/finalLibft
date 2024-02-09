/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherraiz <rherraiz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:26:22 by rherraiz          #+#    #+#             */
/*   Updated: 2024/01/30 02:54:53 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ft_strchr se utiliza para buscar la primera aparicion
* de un caracter especifico en una cadena de caracteres.
* si se encuentra el caracter devuelve un puntero a la posicion
* del caracter en la cadena, de lo contrario devuelve null.
*
* str -> puntero a la cadena en la que se realizara la busqueda
* c -> caracter que se está buscando.
**/
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
