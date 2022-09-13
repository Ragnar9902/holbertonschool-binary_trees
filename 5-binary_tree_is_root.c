#include "binary_trees.h"
/**
 * binary_tree_is_root - check is the node is a root
 *
 * @node: Pointer to de node to be ask
 *
 * Return: 1 if is root 0 is not
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->parent == NULL)
	{
		return (1);
	}
	return (0);
}
