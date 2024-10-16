/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:13:51 by alda-sil          #+#    #+#             */
/*   Updated: 2024/10/14 15:30:40 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n;

	i = 0;
	n = len;
	if (*little == '\0')
		return ((char *)big);
	while (i < n && big[i])
	{
		j = 0;
		while ((big[i + j] == little[j] && i + j < n) || little[j] == '\0')
		{
			if (little[j] == '\0')
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	c[] = "";
	char	c2[] = "";

	printf("%s",ft_strnstr(c , c2, -1));
}
*/
