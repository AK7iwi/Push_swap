/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 00:41:28 by mfeldman          #+#    #+#             */
/*   Updated: 2022/11/26 01:47:57 by mfeldman         ###   ########.fr       */
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
	t_pile *t;
	
	i = 1;
	while(argv[i] && argc < 5)
	{
		printf("%s", argv[i]);
		printf("%d%s", argc, "\n");
		printf("%d",push_swap(t));
		i++;
	}
	return(0);
}