#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if a tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int ileft, iright;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->right)
	{
		ileft = binary_tree_is_full(tree->left);
		iright = binary_tree_is_full(tree->right);
		return (ileft && iright);
	}
	return (0);
}
