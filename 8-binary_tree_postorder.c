#include "binary_trees.h"
/**
 * binary_tree_postorder - travel in postorder way in a binary tree
 *
 * @tree: Pointer to the node root of the binary tree
 * @func: Pointer to function
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
