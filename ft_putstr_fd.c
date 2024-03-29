/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherraiz <rherraiz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:15:50 by rherraiz          #+#    #+#             */
/*   Updated: 2024/02/12 14:24:43 by rherraiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (fd >= 0)
	{
		if (s != NULL)
		{
			while (*s != '\0')
			{
				ft_putchar_fd(*s, fd);
				s++;
			}
		}
	}
	return ;
}
