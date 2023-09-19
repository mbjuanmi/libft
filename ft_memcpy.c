/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmelende <jmelende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 23:21:35 by jmelende          #+#    #+#             */
/*   Updated: 2023/09/13 23:21:36 by jmelende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	char	*char_dst;
	char	*char_src;

	if (dst == NULL)
		return (NULL);
	char_dst = (char *) dst;
	char_src = (char *) src;
	while (len--)
	{
		*char_dst++ = *char_src++;
	}
	return (dst);
}
/*
int main()
{
	char src[] = "copy this and that";
	char dest[100];

	memcpy(dest, src, strlen(src) + 1);
	printf("memcpy: %s\n", dest);
	ft_memcpy(dest, src, strlen(src) + 1);
	printf("ft_memcpy: %s\n", dest);
	return (0);
}
*/
