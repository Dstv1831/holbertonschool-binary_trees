#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if the binary tree is full
 * @tree: pointer to root
 *
 * Return: 1 if full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_c, right_c;

	if (tree == NULL)
		return (0);

	/* Return 1 if it is a leaf node */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_c = binary_tree_is_full(tree->left);
	right_c = binary_tree_is_full(tree->right);

	/* If both subtrees are full, the tree is full */
	return (left_c && right_c);
}
