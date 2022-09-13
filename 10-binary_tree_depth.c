#include "binary_trees.h"
size_t binary_tree_depth(binary_tree_t *tree)
{
	size_t dth;
	binary_tree_t *paren;

	if (tree == NULL)
	{
		return (0);
	}
	dth = 0;
	paren = tree;
	while (paren != NULL)
	{
		dth++;
		paren = paren->parent;
	}
	return (dth);
}
