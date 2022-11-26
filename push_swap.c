/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 00:41:28 by mfeldman          #+#    #+#             */
/*   Updated: 2022/11/26 18:32:44 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Algo de tri*/

int push_swap(t_pile *pile)
{
	pile->apile = 5;
	return(pile->apile);
}

/*Message d'erreur*/

int main(int argc, char **argv)
{
	int i;
	// t_pile *t; 
	
	i = 0;
	while(argv[i] && argc != 0)
	{
		printf("%s", argv[i]);
		// printf("%d",push_swap(t));
		i++;
	}
	return(0);
}

/*Essayer les structures (voir avec la lib)*/
/*t_pile *t = ft_atoi(argv),va dans push_swap*/
/*strcut dans struct*/