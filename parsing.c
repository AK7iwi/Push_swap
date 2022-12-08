/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 02:44:01 by mfeldman          #+#    #+#             */
/*   Updated: 2022/12/09 00:31:23 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Parsing */

char *ft_parsing(char *argv)
{
	char **tab;
	char *dest;

	tab = ft_split(argv, ' ');
	if(!tab)
		return(NULL);
	dest = *tab;
	free(tab);
	return(dest); 
}
