/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eny-fiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:54:21 by eny-fiti          #+#    #+#             */
/*   Updated: 2024/02/28 09:19:02 by eny-fiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char const *s1, char const *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	res;
	unsigned char	*f;
	unsigned char	*c;

	i = 0;
	res = 0;
	f = (unsigned char *)s1;
	c = (unsigned char *)s2;
	if ((!f[i] || !c[i]) && (n != 0))
		return (f[i] - c[i]);	
	while (i < n && (f[i] || c[i]))
	{
		if (f[i] != c[i])
			return (f[i] - c[i]);
		i++;
	}
	return (res);
}
