#include <stdio.h>
#include <stdlib.h>
#include <math.h>i
#include "binary_trees.h"

/**
 * binary_height - measures the height of a binary tree.
 * @tree: pointer to the root node
 * Return: height of tree
 */

int binary_height(const binary_tree_t *tree);
int binary_size(const binary_tree_t *tree);

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
 * Return: height of tree
 */

int binary_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to root
 * Return: 1 if perfect else 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, size;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	/* In a perfect binary tree, the number of nodes is (2^height - 1) */
	return (size == (pow(2, height) - 1));
}
