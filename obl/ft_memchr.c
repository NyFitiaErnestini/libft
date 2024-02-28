/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eny-fiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 08:14:29 by eny-fiti          #+#    #+#             */
/*   Updated: 2024/02/28 10:58:42 by eny-fiti         ###   ########.fr       */
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
	while ((i < n) && (y[i]))
	{
		if (y[i] == x)
			return (y + i);
		i++;
	}
	if (x == '\0')
		return (y + i);
	return (NULL);
}
