#include "binary_trees.h"
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
	parent->left = left_node;
	return(left_node);
}
