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
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: 0 if a tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t hleft = 0, hright = 0, balance;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	if (tree->left)
		hleft = binary_tree_height(tree->left) + 1;
	if (tree->right)
		hright = binary_tree_height(tree->right) + 1;

	balance = hleft - hright;

	return (balance);
}
