#include "binary_trees.h"
/**
 * binary_tree_is_full - chech if the binary tree is full
 *
 * @tree: Pointer to the root of the binary tree
 * Return: 1 if is full 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (0);
}
/**
 * node_is_not_full - find out if the node is full
 *
 * @node: Pointer to the node of the binary tree
 * Return: 1 || 0
 */
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
