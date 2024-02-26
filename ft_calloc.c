/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherraiz <rherraiz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:13:07 by rherraiz          #+#    #+#             */
/*   Updated: 2024/02/12 13:32:59 by rherraiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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
