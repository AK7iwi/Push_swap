/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 00:41:28 by mfeldman          #+#    #+#             */
/*   Updated: 2022/12/06 23:38:14 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Algo de tri*/

void *push_swap(t_listdc *l)
{
	int i;
	i = ft_dlstsize(l);

	if(i< 100)
		printf("%d", i);
		// algo1();
	else if(i >= 100 && i <= 500)
		printf("%d", i);
		// algo2();
	else if (i > 500)
		printf("%d", i);
		// algo3();
	return(0);
}

/*Message d'erreur*/

int main(int argc, char **argv)
{
	int i;
	char *tab;
	t_listdc l;
	
	i = 0;
	ft_dlstinit(&l);
	while(argv[i] && argc != 0)
	{
		tab = ft_parsing(argv[i++]);
		ft_dlstfill(&l, ft_atoi(tab));
		free(tab);
	}
	push_swap(&l);
	ft_dlstfree(&l);
	return(0);
}