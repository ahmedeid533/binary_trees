#include "binary_trees.h"

/**
 * binary_tree_balance - calc the balance
 * @tree: A pointer to root
 * Return: balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}
