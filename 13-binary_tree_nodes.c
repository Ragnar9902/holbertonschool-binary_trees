#include "binary_trees.h"
/**
 * binary_tree_nodes - find out the number of nodes with at leaves one child
 *
 * @tree: Pointer to the root of the binary tree
 * Return: nodes of the binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	nodes = binary_tree_size(tree) - binary_tree_leaves(tree);
	return (nodes);
}
