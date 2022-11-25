/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 04:07:11 by mfeldman          #+#    #+#             */
/*   Updated: 2022/05/19 16:02:10 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	if (!dest && !src)
		return (NULL);
	while (++i < n)
		(*(unsigned char *)(dest + i)) = (*(unsigned char *)(src + i));
	return ((unsigned char *)dest);
}
/*
int main()
{
	char str1[20] = "Patate a l'huile";
	char str2[20] = "Patate a l'huile";
	char str11[20] = "OUI";
	char str22[20] = "OUI";
	printf("%p", memcpy(str1, str11, 5));
	printf("%s","\n");
        printf("%p",ft_memcpy(str1,str22, 5));
}
*/
