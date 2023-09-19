/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmelende <jmelende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 23:21:26 by jmelende          #+#    #+#             */
/*   Updated: 2023/09/13 23:21:28 by jmelende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ss1;
	const unsigned char	*ss2;
	size_t				i;

	i = 0;
	ss1 = (const unsigned char *)s1;
	ss2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
    const char *s1 = "Hello";
    const char *s2 = "World";
     const char *s3 = "Hello";
    size_t n = 5;
    
    int result1 = ft_memcmp(s1, s2, n);
    int result2 = memcmp(s1, s2, n);

     int result3 = ft_memcmp(s1, s3, n);
    int result4 = memcmp(s1, s3, n);
    
    printf("ft_memcmp: %d\n", result1);
    printf("memcmp: %d\n", result2);
    printf("ft_memcmp: %d\n", result3);
    printf("memcmp: %d\n", result4);

    return (0);
}
*/
