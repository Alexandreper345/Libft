/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:47:22 by alda-sil          #+#    #+#             */
/*   Updated: 2024/10/14 14:19:19 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*temp2;
	unsigned char	*temp;
	size_t			i;

	i = 0;
	temp = (unsigned char *)dest;
	temp2 = (unsigned char *)src;
	if (!dest && !dest)
		return (0);
	while (i < n)
	{
		temp[i] = temp2[i];
		i++;
	}
	dest = temp;
	return (dest);
}
