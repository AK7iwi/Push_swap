/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 23:27:51 by mfeldman          #+#    #+#             */
/*   Updated: 2022/12/08 23:44:41 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Fcts utils*/

/*Initisliser la dliste*/

void ft_dlstinit(t_listdc *l)
{
   l->first = NULL;
   l->last = NULL;
}

/*Ajouter un element a la stack*/

void *ft_dlstfill(t_listdc *l, int val)
{
	t_stack *new;
	new =  malloc(sizeof(t_stack));
	if(!new)
		return(NULL);
	new->value = val;
	new->prev = l->last;
	new->next = NULL;
	if(l->last) 
   		l->last->next = new;
	else 
		l->first = new;
	l->last = new;
	return(0);      
}
/*Taille liste doublement chainee */ // -1 pour enlever l"exec

int	ft_dlstsize(t_listdc *l)
{
	int	i;
	t_stack *pelem;

	i = 0;
	pelem = l->first;
	while (pelem)
	{
		i++;
		pelem = pelem->next;
	}
	return (i);
}

/*Free la liste doublement chainee*/

void ft_dlstfree(t_listdc *l)
{
	t_stack *tmp;
	t_stack *pelem;
	pelem = l->first;
	while(pelem)
	{
		tmp = pelem;
		pelem = pelem->next;
		free(tmp);
	}
	l->first = NULL;
	l->last = NULL;
}