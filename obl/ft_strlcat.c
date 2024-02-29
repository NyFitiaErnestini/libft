/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eny-fiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 12:02:37 by eny-fiti          #+#    #+#             */
/*   Updated: 2024/02/29 15:27:11 by eny-fiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	j;
	unsigned int	i;
	unsigned int	k;

	i = 0;
	j = 0;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	k = size - len_dest -1;
	if (size > len_dest)
	{
		while (dest[i] != '\0')
			i++;
		while (src[j] && (k > j))
			dest[i++] = src[j++];
		dest[i] = '\0';
		return (len_dest + len_src);
	}
	if (size == 0)
		return (len_src);
	else if (size <= len_dest)
		return (len_src + size);
	return (0);
}
