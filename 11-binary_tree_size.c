#include "binary_trees.h"
/**
 * binary_tree_size - find out the total number of node of the tree
 *
 * @tree: Pointer to the root of the binary tree
 * Return: size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sleft, sright, size;

	if (tree == NULL)
	{
		return (0);
	}
	if ((tree->left == NULL) && (tree->right == NULL))
	{
		return (1);
	}

	sleft = binary_tree_size(tree->left);
	sright = binary_tree_size(tree->right);
	size = sleft + sright + 1;
	return (size);
}
