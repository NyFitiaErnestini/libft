/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eny-fiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 08:21:16 by eny-fiti          #+#    #+#             */
/*   Updated: 2024/02/29 15:16:03 by eny-fiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long int s)
{
	int	count;

	count = 0;
	if (s < 0)
	{
		count++;
		s = -s;
	}
	if (s == 0)
		count++;
	while (s != 0)
	{
		count++;
		s /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long int	x;
	int			len;
	int			i;
	char		*res;

	x = n;
	len = ft_len(x);
	res = (char *) malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	i = len - 1;
	if (x < 0)
	{
		x = -x;
		res[0] = '-';
	}
	if (x == 0)
		res[0] = 48;
	while (x != 0)
	{
		res[i--] = (x % 10) + 48;
		x /= 10;
	}
	res[len] = 0;
	return (res);
}
