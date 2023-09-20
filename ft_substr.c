/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmelende <jmelende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 23:27:32 by jmelende          #+#    #+#             */
/*   Updated: 2023/09/13 23:27:34 by jmelende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		sub = ft_calloc(1, sizeof(char));
		if (!sub)
			return (NULL);
	}
	else
	{
		i = ft_strlen(s + start);
		if (!(i < len))
			i = len;
		sub = (char *)malloc((i + 1) * sizeof(char));
		if (!sub)
			return (NULL);
		sub[i] = 0;
		while (i-- > 0)
			sub[i] = s[start + i];
	}
	return (sub);
}

/*
int main(void)
{
	char *str1 = "Hello 42";
	char *str2;
	str2 = ft_substr(str1, 6, 2);
	printf("substr(\"Hello 42\", 6, 2) : %s\n", str2);
	free(str2);
}
*/