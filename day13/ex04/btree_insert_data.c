/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 19:47:06 by bsingh            #+#    #+#             */
/*   Updated: 2018/07/06 11:25:30 by bsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	b_tree *current;

	if (!root || !*root || !item)
	{
		if (item && root)
			*root = btree_create_node(item);
		return ;
	}
	now = *root;
	if (cmpf(item, now->item) < 0)
	{
		if (now->left)
			btree_insert_data(&now->left, item, cmpf);
		else
			now->left = btree_create_node(item);
	}
	else
	{
		if (now->right)
			btree_insert_data(&now->right, item, cmpf);
		else
			now->right = btree_create_node(item);
	}
}
