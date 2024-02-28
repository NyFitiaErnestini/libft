/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eny-fiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:10:52 by eny-fiti          #+#    #+#             */
/*   Updated: 2024/02/28 12:03:16 by eny-fiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest, void *src, unsigned int n)
{
	unsigned int	i;
	char			*s;
	char			*d;

	i = 0;
	if (dest == (void *)0 && src == (void *)0)
		return (dest);
	s = (char *)src;
	d = (char *)dest;
	if (n == 0)
		return (d);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
