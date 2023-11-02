#include "binary_trees.h"

/**
 * binary_tree_is_root - check tree
 * @node: the root node
 * Return: 1 if root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);
	return (0);
}
