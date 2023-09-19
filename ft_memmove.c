/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmelende <jmelende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 23:21:44 by jmelende          #+#    #+#             */
/*   Updated: 2023/09/13 23:21:51 by jmelende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*char_dst;
	char	*char_src;

	char_dst = (char *)dst;
	char_src = (char *)src;
	if (dst == src)
		return (dst);
	if (char_src < char_dst)
	{
		while (len--)
			*(char_dst + len) = *(char_src + len);
		return (dst);
	}
	while (len--)
		*char_dst++ = *char_src++;
	return (dst);
}
/*
int main()
{
	char src[] = "copy this 12345";
	char dest1[100];
	char dest2[100];

	printf("Original: %s\n", src);

	memmove(dest1, src, strlen(src) + 1);
	printf("memmove: %s\n", dest1);

	ft_memmove(dest2, src, strlen(src) + 1);
	printf("ft_memmove: %s\n", dest2);

	return (0);
}
*/
