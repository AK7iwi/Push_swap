/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 02:44:01 by mfeldman          #+#    #+#             */
/*   Updated: 2022/11/29 00:16:33 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Parsing */

char **parsing(char *argv) //char *
{
	int j;
	int k;
	char **tab;

	j = 0;
	k = 0;
	tab = ft_split(argv, ' ');
	while(tab[j])
	{
		while(tab[j][k])
		{	
			k++;
			printf("%s%c%s","tab[j]1 : ", tab[j][k],"\n");
		}
		printf("%s%s%s","tab[j]2 : ", tab[j],"\n");
		j++;
	}
	return(tab); //return(tab[j])
}
