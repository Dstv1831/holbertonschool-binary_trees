#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree. If tree is NULL, return 0.
 */

int binary_tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to root
 * Return: 1 if perfect else 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_h, right_h, new_l, new_r;

	if (tree == NULL)
		return (1);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	/* Check if heights of left and right subtrees are equal */
	if (left_height != right_height)
		return (0);

	/* Recursively check if left and right subtrees are perfect */
	new_l = tree->left;
	new_r = tree->right;

	return (binary_tree_is_perfect(new_l) && binary_tree_is_perfect(new_r));
}
