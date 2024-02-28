/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eny-fiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:15:00 by eny-fiti          #+#    #+#             */
/*   Updated: 2024/02/28 12:17:23 by eny-fiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;


	i = 0;
	if (start >= (unsigned int)ft_strlen((char *)s))
		res = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	else
		res = (char *) malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	while ((i < len) && (s[i] != '\0'))
	{
		res[i] = s[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return (res);
}
