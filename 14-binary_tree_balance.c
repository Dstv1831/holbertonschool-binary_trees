#include "binary_trees.h"

int binary_height(const binary_tree_t *tree);

/**
 * binary_height - measures the height of a binary tree.
 * @tree: pointer to the root node
 * Return: height of tree
 */

int binary_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_height(tree->left);
	right_height = binary_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_balance - function that measures the balance factor
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: If tree is NULL, return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_height(tree->left);
	right_height = binary_height(tree->right);

	return (left_height - right_height);
}
