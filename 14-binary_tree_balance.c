#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node to calculate balance factor.
 * Return: The balance factor of the tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	int left_height = (tree->left) ? (int)binary_tree_height(tree->left) + 1 : 0;
	int right_height = (tree->right) ? (int)binary_tree_height(tree->right) + 1 : 0;

	return (left_height - right_height);
}

/**
 * binary_tree_height - Gets the height of a binary tree.
 * @tree: Root node to calculate height from.
 * Return: Height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	return (1 + ((left_height > right_height) ? left_height : right_height));
}
