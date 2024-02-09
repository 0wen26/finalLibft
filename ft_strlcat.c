/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherraiz <rherraiz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:52:51 by rherraiz          #+#    #+#             */
/*   Updated: 2024/01/30 02:39:48 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_strlcat es una funcion de manipulacion de cadenas que se utiliza
 * para concatenar una cadena de origen a una cadena de destino
 * garantizando que el destino no exceda un tamaño especifico.
 * garantiza que el destino este terminado con caracter nulo.
 *La función devuelve el tamaño total que habría tenido la cadena si 
  no se hubiera producido el desbordamiento, independientemente del tamaño 
  real del destino.
 * dest -> puntero al destino de la concatenacion.
 * src -> puntero al origen de la concatenacion.
 * size -> tamaño maximo del destino.
 *
 */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char	*s;
	size_t	len_dest;
	size_t	len_src;
	size_t	res;
	size_t	i;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	s = (char *) src;
	res = 0;
	i = 0;
	if (size > len_dest)
		res = len_dest + len_src;
	else
		res = len_src + size;
	while (s[i] != '\0' && (len_dest + 1) < size)
	{
		dest[len_dest] = s[i];
		len_dest++;
		i++;
	}
	dest[len_dest] = '\0';
	return (res);
}
