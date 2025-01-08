#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 *  binary_tree_insert_left - Inserts a node on the
 *  left side of another node.
 *  @parent : Pointer to the parent node
 *  @value: Value to store on the new node
 *
 *  Return: Pointer to the new node, or "NULL" on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node;

	if (parent == NULL)
		return (NULL);

	new_left_node = malloc(sizeof(binary_tree_t));
	
	if (new_left_node == NULL)
		return (NULL);
	
	new_left_node->n = value;
	new_left_node->parent = parent;
	new_left_node->right = NULL;
	new_left_node->left = NULL;

	if (parent->left == NULL)
		parent->left = new_left_node;
	else
	{
		new_left_node->left = parent->left;
		parent->left->parent = new_left_node;
		parent->left = new_left_node;

	}

	return (new_left_node);
}
