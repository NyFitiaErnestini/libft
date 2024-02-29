/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eny-fiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 09:10:02 by eny-fiti          #+#    #+#             */
/*   Updated: 2024/02/29 15:19:02 by eny-fiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	unsigned char		*s;
	unsigned char		*y;
	int					res;
	unsigned int		i;

	i = 0;
	res = 0;
	s = (unsigned char *)s1;
	y = (unsigned char *)s2;
	while (i < n)
	{
		if (s[i] != y[i])
		{
			res = s[i] - y[i];
			return (res);
		}
		i++;
	}
	return (0);
}
