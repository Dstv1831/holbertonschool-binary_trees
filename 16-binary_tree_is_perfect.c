#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

int binary_height(const binary_tree_t *tree);
int binary_size(const binary_tree_t *tree);

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
 * binary_size - measures the size of a binary tree.
 * @tree: pointer to the root node
 * Return: size of tree
 */

int binary_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_size(tree->left) + binary_size(tree->right));
}

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to root
 * Return: 1 if perfect else 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, size, result;

	if (tree == NULL)
		return (0);

	height = binary_height(tree);
	size = binary_size(tree);
	/* bitwise operation that is equal to pow(2, height)  */
	result = (1 << height)

	/* In a perfect binary tree, the number of nodes is (2^height - 1) */
	return (size == (result - 1));
}
