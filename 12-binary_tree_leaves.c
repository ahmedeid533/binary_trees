#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves
 * @tree: A pointer to the root
 *
 * Return: count of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
	{
		count += (!tree->left && !tree->right) ? 1 : 0;
		count += binary_tree_leaves(tree->right);
		count += binary_tree_leaves(tree->left);
	}
	return (count);
}
