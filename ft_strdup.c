/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:39:55 by alda-sil          #+#    #+#             */
/*   Updated: 2024/10/14 15:22:59 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*vec;

	i = 0;
	vec = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (vec == NULL)
		return (NULL);
	while (s[i])
	{
		vec[i] = s[i];
		i++;
	}
	vec[i] = '\0';
	return (vec);
}
