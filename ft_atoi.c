/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eny-fiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:33:58 by eny-fiti          #+#    #+#             */
/*   Updated: 2024/02/22 09:26:51 by eny-fiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	signe;
	int	j;

	signe = 1;
	i = 0;
	j = 0;
	while (((nptr[i] >= 9) && (nptr[i] <= 13)) || (nptr[i] == ' '))
		i++;
	if (nptr[i] == '-')
	{
		signe *= -1;
		i++;
	}
	else if (nptr[i] == '+')
	{
		signe *= 1;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		j = (j * 10) + (nptr[i] - '0');
		i++;
	}
	return (j * signe);
}
