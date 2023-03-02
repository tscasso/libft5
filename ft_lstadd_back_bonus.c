/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tscasso <tscasso@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:24:09 by tscasso           #+#    #+#             */
/*   Updated: 2023/03/02 18:24:23 by tscasso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Fonction ft_lstadd_back_bonus :
** Ajoute un nœud à la fin d'une liste chaînée.
** @param lst : Le pointeur vers la tête de la liste.
** @param new : Le nœud à ajouter à la fin de la liste.
*/

void	ft_lstadd_back_bonus(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
		ft_lstlast_bonus(*lst)->next = new;
}
