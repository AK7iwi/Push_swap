/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 02:44:01 by mfeldman          #+#    #+#             */
/*   Updated: 2023/01/18 09:22:09 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Erreur */

void *ft_error() //char **argv
{
	write(1, "Error\n", 6);
	return(NULL);
}

/* Parsing */

int ft_parsing(char **argv)
{
	size_t i;
	size_t j;

	i = 1;
	if(!argv[1])
			return(1);
	while(argv[i])
	{
		j = 0;
		if (argv[i][0] == '+' || argv[i][0] == '-')
			j++;
		while (argv[i][j])
		{
			if(ft_isdigit(argv[i][j]) == 0)
				return(1);
			j++;
		}
		i++;
	if(ft_checkdouble(argv) == 1)
		return(1);
	} 
	return(0); 
}

/* Doublons */

int ft_checkdouble(char **argv)
{
	size_t i;
	size_t j;
	// size_t cont;
	
	i = 0;
	// cont = 1;
	while(argv[i])
	{
		j = i + 1;
		while(argv[j])
		{
			// if(argv[i][0] == '-'|| argv[i][0] == '+')
			// 	cont *= -1;
			if(ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return(1);
			j++;
		}
		i++;
	}
	return(0);
}