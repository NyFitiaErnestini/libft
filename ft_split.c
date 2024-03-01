/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eny-fiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:16:38 by eny-fiti          #+#    #+#             */
/*   Updated: 2024/02/26 14:40:49 by eny-fiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word(char const *s, char c)
{
	int	i;
	int	del;
	int	x;

	i = 0;
	del = 0;
	x = 0;
	while (s[i])
	{
		if (s[i] != c && x == 0)
		{
			del++;
			x = 1;
		}
		else if (s[i] == c)
			x = 0;
		i++;
	}
	return (del);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;
	int		st;

	res = ft_calloc((ft_word(s, c) + 1), sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	st = -1;
	while (i <= ft_strlen((char *)s))
	{
		if (s[i] != c && st < 0)
			st = i;
		else if ((s[i] == c || i == ft_strlen((char *)s)) && st >= 0)
		{
			res[j] = ft_substr(s, st, (i - st));
			st = -1;
			j++;
		}
		i++;
	}
	return (res);
}
