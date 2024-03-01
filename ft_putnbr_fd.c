/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eny-fiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:11:19 by eny-fiti          #+#    #+#             */
/*   Updated: 2024/02/26 14:44:39 by eny-fiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int x, int fd)
{
	int			res;
	char		c;
	long int	n;

	n = x;
	if (n < 0)
	{
		write (fd, "-", 1);
		n = -n;
	}
	res = n % 10;
	c = res + '0';
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	write (fd, &c, 1);
}
