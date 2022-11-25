/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 06:24:37 by mfeldman          #+#    #+#             */
/*   Updated: 2022/05/19 16:04:54 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dest;

	dest = (char *)malloc(sizeof (*s) * (ft_strlen(s) + 1));
	if (dest == 0)
		return (0);
	i = -1;
	while (++i < ft_strlen(s))
		dest[i] = s[i];
	dest[i] = '\0';
	return (dest);
}
