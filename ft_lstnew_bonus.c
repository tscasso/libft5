/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tscasso <tscasso@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:14:51 by tscasso           #+#    #+#             */
/*   Updated: 2023/03/02 18:22:06 by tscasso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Alloue et retourne un nouveau nœud.
** param content : Le contenu à stocker dans le nouveau nœud.
** return Le nouveau nœud, ou NULL en cas d'erreur.
*/

#include "libft.h"

t_list	*ft_lstnew_bonus(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
