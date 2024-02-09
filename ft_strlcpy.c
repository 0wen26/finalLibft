/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherraiz <rherraiz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:02:57 by rherraiz          #+#    #+#             */
/*   Updated: 2024/01/18 19:03:27 by rherraiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ft_strlcpy es una funcion de manipulacion de cadenas que se
 * utiliza para copiar una cadena de origen a un destino, garantizando
 * que el destino no exceda un tamaño especifico.
 * garantiza que el destino este terminado con caracter nulo.
 *
 * devuelve la longitud del string
 *
 * dest -> puntero al destino de la copia
 * src -> puntero al origen de la copia
 * size -> tamaño maximo del destino
 *
 */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	if (size != 0)
		dest[i] = '\0';
	return (ft_strlen(src));
}
