/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 02:44:01 by mfeldman          #+#    #+#             */
/*   Updated: 2022/12/09 15:49:21 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Free argv split*/

void ft_free_split(char **argv)
{
	int i;

	i = 0;
	while(argv[i++])
		free(argv[i]);
	free(argv);
}
/* Erreur */

void *ft_error() //char **argv
{
	write(1, "Error\n", 6);
	// ft_free_split(argv);
	return(NULL);
}

/* Parsing */

int ft_parsing(char **argv)
{
	size_t i;
	size_t j;

	i = 1;
	while(argv[i])
	{
		j = 0;
		if (argv[i][0] == '+' || argv[i][0] == '+')
			j++;
		if(ft_isdigit(argv[i][j]) == 0)
			return(1);
		while (argv[i][j])
		{
			if(ft_isdigit(argv[i][j]) == 0)
				return(1);
			j++;
		}
		i++;
	} 
	return(0); 
}

