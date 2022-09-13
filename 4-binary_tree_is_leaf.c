#include "binary_trees.h"
/**
 * _height - check is the node is a leaf
 *
 * @node: Pointer to de node to be ask
 *
 * Return: 1 if is leaf 0 is not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if ((node->left == NULL) && (node->right == NULL))
	{
		return (1);
	}
	return (0);
}
