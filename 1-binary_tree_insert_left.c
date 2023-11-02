#include "binary_trees.h"

/**
 * binary_tree_insert_left - add new node in left
 * @parent: parent node
 * @value: value of the node
 * Return: pointer, null if fails
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = binary_tree_node(parent, value);
	if (!new_node || !parent)
		return (NULL);

	if (parent->left)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	parent->left = new_node;

	return (new_node);
}
