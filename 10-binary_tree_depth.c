#include "binary_trees.h"

/**
 * binary_tree_depth - calc the depth
 * @tree: A pointer to the node
 * Return: the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
