/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherraiz <rherraiz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:16:04 by rherraiz          #+#    #+#             */
/*   Updated: 2024/02/12 14:16:49 by rherraiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
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
		ft_putchar_fd('\n', fd);
	}
	return ;
}
