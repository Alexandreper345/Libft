/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:56:43 by alda-sil          #+#    #+#             */
/*   Updated: 2024/10/14 15:31:56 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*vec;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	vec = (char *)malloc(sizeof(char) * len + 1);
	if (!vec)
		return (NULL);
	i = 0;
	while (s[start] != '\0' && i < len)
	{
		vec[i] = s[start];
		start++;
		i++;
	}
	vec[i] = '\0';
	return (vec);
}
