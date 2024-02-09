/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherraiz <rherraiz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:13:07 by rherraiz          #+#    #+#             */
/*   Updated: 2024/01/30 04:22:30 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*  ft_calloc se utiliza para asignar dinamicamente un bloque de
 205   │  * memoria contigua para un numero especificado de elementos, cada uno
 206   │  * de un tamaño especificado, e inicializa todos los bits en 0.
 207   │  *
 208   │  * la funcion devuelve un puntero al bloque de memoria asignado o null 
 209   │  * si la asignacion falla.
 210   │  *
 211   │  * importante liberar la memoria con free cuando ya no se necesite.
 212   │  *
 213   │  * num_elements -> numero de elementos que se deben asignar.
 214   │  * element_size -> tamaño en bytes de cada elemento.
 215   │  *
*/
#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t elements_size)
{
	void	*ptr;

	ptr = malloc(num_elements * elements_size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, num_elements * elements_size);
	return (ptr);
}
