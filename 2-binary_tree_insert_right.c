#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 *  binary_tree_insert_right - Inserts a node on the
 *  right side of another node.
 *  @parent : Pointer to the parent node
 *  @value: Value to store on the new node
 *
 *  Return: Pointer to the new node, or "NULL" on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_node;

	if (parent == NULL)
		return (NULL);

	new_right_node = malloc(sizeof(binary_tree_t));

	if (new_right_node == NULL)
		return (NULL);

	new_right_node->n = value;
	new_right_node->parent = parent;
	new_right_node->right = NULL;
	new_right_node->left = NULL;

	if (parent->right == NULL)
		parent->right = new_right_node;
	else
	{
		new_right_node->right = parent->right;
		parent->right->parent = new_right_node;
		parent->right = new_right_node;

	}

	return (new_right_node);
}
