/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eny-fiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 08:14:29 by eny-fiti          #+#    #+#             */
/*   Updated: 2024/02/29 09:40:47 by eny-fiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	char			x;
	char			*y;
	unsigned int	i;

	i = 0;
	y = (char *)s;
	x = (char)c;
	while (i < n)
	{
		if (y[i] == x)
			return (y + i);
		i++;
	}
	return (NULL);
}
