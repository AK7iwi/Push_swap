/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 23:27:51 by mfeldman          #+#    #+#             */
/*   Updated: 2023/02/21 18:47:57 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


/*Ajouter un element a la stack*/

void ft_dlstadd_front(t_listdc *l, int val)
{
	t_stack *new;
	new =  malloc(sizeof(t_stack));
	if(!new)
		exit(EXIT_FAILURE);
	new->value = val;
	new->prev = NULL;
	new->next = l->first;
	if(l->first) 
   		l->first->prev = new;
	else 
		l->last = new;
	l->first = new;    
}

void ft_dlstadd_back(t_listdc *l, int val)
{
    t_stack *new;
    new = malloc(sizeof(t_stack));
    if (!new)
        exit(EXIT_FAILURE);
    new->value = val;
    new->prev = l->last;
    new->next = NULL;
    if (l->last)
        l->last->next = new;
    else
        l->first = new;
    l->last = new;
}


void ft_dlstpop_front(t_listdc *l)
{
    if (l->first)
    {
        t_stack *tmp;
		tmp = l->first;

        l->first = tmp->next;
        if (l->first)
            l->first->prev = NULL;
        else
            l->last = NULL;
        free(tmp);
    }
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
	t_stack *pelem;
	while (l->first)
	{
		pelem = l->first;
		l->first = l->first->next;
		free(pelem);
	}
	l->last = NULL;
	l->first = NULL;
}

