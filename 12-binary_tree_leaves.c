#include "binary_trees.h"
/**
 * binary_tree_leaves - find out the total number of leaves of the tree
 *
 * @tree: Pointer to the root of the binary tree
 * Return: leaves of the binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leav, lleav, rleav;

	if (tree == NULL)
	{
		return (0);
	}
	if ((tree->left == NULL) && (tree->right == NULL))
	{
		return (1);
	}
	lleav = binary_tree_leaves(tree->left);
	rleav = binary_tree_leaves(tree->right);
	leav = lleav + rleav;
	return (leav);
}
