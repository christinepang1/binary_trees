#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size of binary tree or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sleft, sright, size;

	if (tree == NULL)
		return (0);

	sleft = 1 + binary_tree_size(tree->left);
	sright = 1 + binary_tree_size(tree->right);

	size = (sleft + sright - 1);
	return (size);
}
