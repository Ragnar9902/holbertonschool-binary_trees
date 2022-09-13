#include "binary_trees.h"
/**
 * binary_tree_depth - find out the depth of a node in a binary tree
 *
 * @tree: Pointer to the node of the binary tree
 * Return: depth of the node
 */
size_t binary_tree_depth(binary_tree_t *tree)
{
	size_t dth;
	binary_tree_t *paren;

	if (tree == NULL)
	{
		return (0);
	}
	dth = -1;
	paren = tree;
	while (paren != NULL)
	{
		dth++;
		paren = paren->parent;
	}
	return (dth);
}
