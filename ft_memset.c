/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmelende <jmelende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 23:22:01 by jmelende          #+#    #+#             */
/*   Updated: 2023/09/13 23:22:05 by jmelende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t					i;
	unsigned char			*ptrs;

	i = 0;
	ptrs = s;
	while (i < n)
	{
		ptrs[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
int main() {
    char str[50];

    memset(str, 'A', 10);
	ft_memset(str, 'A', 10);

    printf("Original %s\n", str);
	printf("ft_memset %s\n", str);

    return 0;
}
*/