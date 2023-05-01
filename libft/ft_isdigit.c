/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 08:31:48 by mfeldman          #+#    #+#             */
/*   Updated: 2023/04/30 19:25:28 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/*
int main()
{
	printf("%d",ft_isdigit(54));
	printf("%d",ft_isdigit(49));
	printf("%d",ft_isdigit(70));
        printf("%d",ft_isdigit(140));
	printf("%d",ft_isdigit(200));
	printf("%d",ft_isdigit(500));
	printf("%d",ft_isdigit(-26));
	printf("%s","\n");
        printf("%d",isdigit(54));
	printf("%d",isdigit(49));
        printf("%d",isdigit(70));
	printf("%d",isdigit(140));
	printf("%d",isdigit(200));
	printf("%d",isdigit(500));
	printf("%d",isdigit(-26));

}
*/
