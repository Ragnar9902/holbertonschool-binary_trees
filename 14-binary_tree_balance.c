#include "binary_trees.h"
/**
 * binary_tree_balance - find out the balance factor of a binary tree
 *
 * @tree: Pointer to the node root of the binary tree
 * Return: balance factor of the binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance;
	size_t heightl, heightr;

	if (tree == NULL)
	{
		return (0);
	}

	heightl = tree->left ? (int)binary_tree_height(tree->left) : -1;
	heightr = tree->right ? (int)binary_tree_height(tree->right) : -1;
	balance = heightl - heightr;
	return (balance);
}
/**
 * returngreater - find the geater of two unsigned integer
 *
 * @a: first integer
 * @b: second integer
 * Return: the greater between the two
 */
size_t returngreater(size_t a, size_t b)
{

	if (a > b)
	{
		return (a);
	}
	return (b);

}
/**
 * binary_tree_height - find out the height of the binary tree
 *
 * @tree: Pointer to the node root of the binary tree
 * Return: height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h, lef, rig;

	if (tree == NULL)
	{
		return (0);
	}

	if ((tree->left == NULL) && (tree->right == NULL))
	{
		return (0);
	}
	lef = binary_tree_height(tree->left);
	rig = binary_tree_height(tree->right);
	h = returngreater(lef, rig) + 1;
	return (h);
}
