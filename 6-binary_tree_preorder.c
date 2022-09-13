#include "binary_trees.h"
/**
 * binary_tree_preorder - travel in preorder way in a binary tree
 *
 * @tree: Pointer to the node root of the binary tree
 * @func: Pointer to function
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
	{
		return;
	}
	
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}