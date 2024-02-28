/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eny-fiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 08:55:34 by eny-fiti          #+#    #+#             */
/*   Updated: 2024/02/28 11:26:15 by eny-fiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(char *src, char *dest, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if ((dest[i] == '\0'))
		return (src);
	while (src[i] && (len != 0) && (i < len))
	{
		j = 0;
		while ((dest[j] == src[i + j]))
		{
			if (dest[j + 1] == '\0' && (len > (i + j)))
				return (src + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
