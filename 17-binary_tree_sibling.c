#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a given node in a binary tree.
 * @node: The node to find the sibling for.
 * Return: A pointer to the sibling node, or NULL if not found.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (!node || !node->parent)
        return (NULL);
    
    if (node->parent->left == node)
        return (node->parent->right);
    else
        return (node->parent->left);
}
