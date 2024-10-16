/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 16:36:23 by alda-sil          #+#    #+#             */
/*   Updated: 2024/10/12 23:58:21 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	strcount(const char *s, char c)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && j == 0)
		{
			count++;
			j = 1;
		}
		else if (s[i] == c && j == 1)
			j = 0;
		i++;
	}
	return (count);
}

static char	*ft_sbstr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*vec;

	i = 0;
	if (start >= ft_strlen(s))
		return (NULL);
	vec = (char *)malloc(sizeof(char) * len + 1);
	if (!vec)
		return (NULL);
	while (s[start] != '\0' && i < len)
	{
		vec[i] = s[start];
		start++;
		i++;
	}
	vec[i] = '\0';
	return (vec);
}

static char	**verification(char const *s, char c, char **vec)
{
	int	i;
	int	wlen;

	i = 0;
	while (*s)
	{
		wlen = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			s++;
			wlen++;
		}
		vec[i++] = ft_sbstr(s - wlen, 0, wlen);
	}
	return (vec);
}

char	**ft_split(char const *s, char c)
{
	char	**vec;
	int		count;

	if (!s)
		return (NULL);
	count = strcount(s, c);
	vec = ((char **)malloc(sizeof(char *) * (count + 1)));
	if (!vec)
		return (NULL);
	else
		verification(s, c, vec);
	vec[count] = NULL;
	return (vec);
}

/*
#include <stdio.h>
int	main(void)
{
	char	c[] = "  tripouille  42  ";
	int	i;
	char	**c2 = ft_split(c, ' ');

	i = 0;

	while (c2[i] != NULL)
	{
		printf("palavra[%d]: %s\n",i,c2[i]);
		i++;
	}
	return (0);
}
*/
