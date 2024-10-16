/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:21:23 by alda-sil          #+#    #+#             */
/*   Updated: 2024/10/12 18:23:38 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char		*str;
	size_t		full_size;
	size_t		i;

	i = 0;
	full_size = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (full_size / nmemb != size)
		return (NULL);
	str = malloc(full_size);
	if (!str)
		return (NULL);
	while (i < full_size)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
