#include "binary_trees.h"
int binary_tree_is_full(const binary_tree_t *tree)
{
	int leftf, rightf;

	if (tree == NULL)
	{
		return (0);
	}
	if (node_is_not_full(tree))
	{
		return (0);
	}
	leftf = binary_tree_is_full(tree->left);
	rightf = binary_tree_is_full(tree->right);
	if (leftf || rightf)
	{
		return (0);
	}
	return (1);
}
int node_is_not_full(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if ((node->left != NULL) && (node->right == NULL))
	{
		return (1);
	}
	if ((node->right != NULL) && (node->left == NULL))
	{
		return (1);
	}
	return (0);	
}