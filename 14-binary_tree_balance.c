#include "binary_trees.h"

/**
  * binary_tree_balance - measure  balance factor of a binary tree
  * @tree: pointer to root node of tree
  * Return: balance factor of binary tree
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL && tree->right != NULL)
	{
		return (2);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	return (-1);
}
