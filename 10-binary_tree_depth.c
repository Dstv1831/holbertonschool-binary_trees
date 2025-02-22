#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: Pointer to the node to measure the depth
 *
 * Return: The depth of the node. If tree is NULL, return 0.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	for (; tree->parent != NULL; tree = tree->parent)
		count++;
	return (count);
}
