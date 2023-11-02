#include "binary_trees.h"

/**
 * binary_tree_delete - delete tree
 * @node: the root node
 * Return: 1 if leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if(!node)
		return (0);
	if(node->left)
		return (0);
	if(node->right)
		return (0);
	return (1);
}
