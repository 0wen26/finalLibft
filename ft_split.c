/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rherraiz <rherraiz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:40:38 by rherraiz          #+#    #+#             */
/*   Updated: 2024/02/09 12:27:09 by rherraiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t ft_counter(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 1;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		if ((s[i] == c && s[i +1] != c) || s[i] == '\0')
			count++;
		i++;
	}
}
/*
char	**ft_split(char const *s, char c)
{


}
*/
#include <stdio.h>
int main()
{
	char const s[] = "Hola que tal";
	char c = ' ';

	printf("%d", ft_counter(s,c));

}
