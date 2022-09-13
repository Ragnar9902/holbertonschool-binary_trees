#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert a new node in the left of a given node
 * @parent: pointer to the node parent
 * @value: the new value to be insert in the node
 * Return: a new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	left_node = binary_tree_node(parent, value);
	if (left_node == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		left_node->left = parent->left;
		parent->left->parent = left_node;
		parent->left = left_node;
		return (left_node);
	}
	parent->left = left_node;
	return (left_node);
}
