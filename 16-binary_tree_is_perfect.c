#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to root
 * Return: 1 if perfect else 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int left, right;

    if (tree == NULL)
        return (1); // An empty tree is perfect by definition

    if (tree->left == NULL && tree->right == NULL)
        return (1); // A leaf node is a perfect subtree

    // Recursively check left and right subtrees
    left = binary_tree_is_perfect(tree->left);
    right = binary_tree_is_perfect(tree->right);

    // Both subtrees must be perfect, and the heights must match
    return (left == right && left != 0);
}

