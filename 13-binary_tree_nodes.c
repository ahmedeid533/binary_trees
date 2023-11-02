#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the 1 child nodes
 * @tree: A pointer to the root
 * Return: count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
	{
		count += (tree->left || tree->right) ? 1 : 0;
		count += binary_tree_nodes(tree->right);
		count += binary_tree_nodes(tree->left);
	}
	return (count);
}
