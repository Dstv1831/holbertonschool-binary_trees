#include "binary_trees.h"

/**
 *  binary_tree_is_leaf - Checks if a node is a leaf.
 *  @node: Pointer to the node to check.
 *
 *  Return: "1" if the node is a leaf, "0" otherwise.
 *
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	/**
	 *  Important to understand logic operators
	 *  AND, OR, XOR, NOT
	 */

	if (node && !(node->left || node->right))
		return (1);
	else
		return (0);
}
