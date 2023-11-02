#include "binary_trees.h"

/**
 * binary_tree_size - calc the size
 * @tree: A pointer to the tree
 * Return: The size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
	{
		count += 1;
		count += binary_tree_size(tree->right);
		count += binary_tree_size(tree->left);
	}
	return (count);
}
