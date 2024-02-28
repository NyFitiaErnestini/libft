/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eny-fiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:28:00 by eny-fiti          #+#    #+#             */
/*   Updated: 2024/02/28 14:29:41 by eny-fiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int		i;
	char	*s;

	i = 0;
	s = (char *)malloc(size * nmemb);
	if (s == NULL)
		return (NULL);
	while (i < (nmemb * size))
	{
		s[i] = 0;
		i++;
	}
	return ((void *)s);
}
