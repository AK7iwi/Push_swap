/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 03:36:12 by mfeldman          #+#    #+#             */
/*   Updated: 2022/05/19 16:35:07 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	i;
	size_t	j;

	s3 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	i = -1;
	j = 0;
	if (!s3)
		return (NULL);
	while (++i < ft_strlen(s1))
		s3[i] = s1[i];
	while (i < ft_strlen(s1) + ft_strlen(s2))
		s3[i++] = s2[j++];
	s3[i] = '\0';
	return (s3);
}
