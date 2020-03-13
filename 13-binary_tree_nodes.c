#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes with at least 1 child in a binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nleft, nright, total;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	nleft = binary_tree_nodes(tree->left) + 1;
	nright = binary_tree_nodes(tree->right) + 1;

	total = nleft + nright - 1;
	return (total);
}
