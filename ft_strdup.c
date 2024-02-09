/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherraiz <rherraiz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:13:23 by rherraiz          #+#    #+#             */
/*   Updated: 2024/01/30 04:24:10 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ft_strdup se utiliza para duplicar una cadena de caracteres
 220   │  * esta funcion asigna dinamicamente memoria para una copia de la
 221   │  * cadena dada y luego copia la cadena original en la nueva memoria.
 222   │  *
 223   │  * importante liberar con free la memoria cuando ya no se necesite.
 224   │  *
 225   │  * la funcion devuelve un puntero a la nueva cadena duplicada o null
 226   │  * si la asignacion de memoria falla.
 227   │  *
 228   │  * str -> puntero a la cadena de caracteres que se desea duplicar.
 229   │  * 
*/
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ret;
	size_t	len;

	len = ft_strlen(s1);
	ret = malloc(sizeof(char) * (len + 1));
	if (ret == NULL)
		return (0);
	ft_strlcpy(ret, s1, len + 1);
	return (ret);
}
