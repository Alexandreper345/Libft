/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 15:24:07 by alda-sil          #+#    #+#             */
/*   Updated: 2024/10/14 15:24:29 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	index;
	size_t	end;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	index = 0;
	end = size - 1;
	if (size == 0)
		return (len_src);
	if (size < len_dst)
		return (size + len_src);
	while (len_dst + index < end && src[index])
	{
		dst[len_dst + index] = src[index];
		index++;
	}
	dst[len_dst + index] = '\0';
	return (len_src + len_dst);
}
