/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eny-fiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:15:00 by eny-fiti          #+#    #+#             */
/*   Updated: 2024/02/29 15:03:49 by eny-fiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	if (start >= (unsigned int)(ft_strlen((char *)s)))
		len = 0;
	if (len >= (ft_strlen((char *)s)) - start)
		len = (ft_strlen((char *)s)) - start;
	res = (char *) malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while ((i < len) && (s[i] != '\0'))
	{
		res[i] = s[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return (res);
}
