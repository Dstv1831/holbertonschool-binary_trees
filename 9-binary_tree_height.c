#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree. If tree is NULL, return 0.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);
	left_h = binary_tree_heigh(tree->left);
	right_h = binary_tree_height(tree->right);
	if (left_h >= right)
		return (left_h + 1);
	else
		return (right_h + 1);
}
