/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherraiz <rherraiz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:02:11 by rherraiz          #+#    #+#             */
/*   Updated: 2024/02/08 15:39:30 by rherraiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ft_strnstr se utiliza para buscar una subcadena en una cadena
 180   │  * tambien tiene en cuenta un limite maximo de longitud.
 181   │  *
 182   │  * devuelve un puntero al inicio de la subcadena si se encuentra
 183   │  * o null si no se encuentra.
 184   │  *
 185   │  * s1 -> puntero al primer bloque de memoria a comparar.
 186   │  * s2 -> puntero al segundo bloque de memoria a comparar.
 187   │  * n -> numero de bytes a comparar.
 188   │  *
 189   │  * */
#include "libft.h"

int	ft_search(char *str1, char *str2, unsigned int i, unsigned int n)
{
	while (str1[i] == str2[i] && i != n)
	{
		i++;
	}
	return (i);
}

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char			*str1;
	char			*str2;
	unsigned int	number;
	unsigned int	i;
	unsigned int	j;
	unsigned int	x;

	x = 0;
	str1 = (char *) s1;
	str2 = (char *) s2;
	number = (unsigned int )n;
	i = 0;
	j = 0;
	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);
	while (i < number)
	{
		if (str1[i] == str2[i])
			j = ft_search(str1, str2, i, number);
			x++;
		if (i == j)
			if (i - x >= 0)
				return (str1 + (i - x));
			return (str1 + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main()
{
	const char str1[] = "lorem ipsum dolor sit amet";
	const char str2[] = "loremm";

	printf("%s",ft_strnstr(str1, str2, 10));
	return 0;
}
*/
