/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherraiz <rherraiz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:00:55 by rherraiz          #+#    #+#             */
/*   Updated: 2024/01/18 19:01:46 by rherraiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned int	i;
	unsigned char	v;
	char			*p;

	i = 0;
	v = (unsigned char) value;
	p = (char *) ptr;
	while (i < num)
	{
		p[i] = v;
		i++;
	}
	return (p);
}
