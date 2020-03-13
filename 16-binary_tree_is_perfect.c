#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of binary tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hleft, hright;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	hleft = binary_tree_height(tree->left) + 1;
	hright = binary_tree_height(tree->right) + 1;

	if (hleft >= hright)
		return (hleft);
	else
		return (hright);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if a tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int ileft, iright;

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree == NULL || (tree->left == NULL || tree->right == NULL))
		return (0);

	ileft = binary_tree_height(tree->left);
	iright = binary_tree_height(tree->right);

	if (ileft != iright)
		return (0);
	else
		return (1);

	return (0);
}
