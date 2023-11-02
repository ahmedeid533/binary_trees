#include "binary_trees.h"

/**
 * binary_tree_node - add new node
 * @parent: parent node
 * @value: value of the node
 * Return: pointer, null if fail
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node || !parent)
		return (NULL);
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;
	if (parent->left)
	{
		new_node->left = parent->left;
	}
	parent->left = new_node;

	return (new_node);
}
