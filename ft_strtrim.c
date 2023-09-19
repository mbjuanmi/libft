/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmelende <jmelende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 23:27:16 by jmelende          #+#    #+#             */
/*   Updated: 2023/09/13 23:27:17 by jmelende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	white_space(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(set))
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		x;
	int		z;
	char	*res;

	i = 0;
	x = 0;
	res = ft_calloc(ft_strlen(s1) + 1, sizeof(char));
	if (!res)
		return (NULL);
	z = ft_strlen(s1);
	while (white_space(s1[i], set) == 1)
		i++;
	while (white_space(s1[z - 1], set) == 1)
		z--;
	while (i < z)
		res[x++] = s1[i++];
	res[x] = '\0';
	return (res);
}
