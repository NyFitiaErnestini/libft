/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eny-fiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:19:17 by eny-fiti          #+#    #+#             */
/*   Updated: 2024/02/29 15:07:05 by eny-fiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_istrim(char const *set, char x)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == x)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		x;
	int		len_s1;
	char	*res;

	i = 0;
	len_s1 = ft_strlen((char *)s1);
	if (s1[i] == '\0' && !set)
		return (ft_strdup(""));
	while (s1[i])
	{
		if (!ft_istrim(set, s1[i]))
			break ;
		i++;
	}
	x = len_s1 - 1;
	while (ft_istrim(set, s1[x]))
		x--;
	res = ft_substr(s1, i, (x - i + 1));
	if (!res)
		return (NULL);
	return (res);
}
