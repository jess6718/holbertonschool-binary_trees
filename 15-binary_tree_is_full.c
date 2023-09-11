#include "binary_trees.h"

/**
  * binary_tree_is_full - checks if parent nodes have a left and right child
  * @tree: pointer to root node of binary tree
  * Return: 1 if binary tree is full, 0 otherwise
  */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	/*check if it is leaf node*/
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	/*check if root has both left / right child*/
	if ((tree->left != NULL) && (tree->right != NULL))
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
	return (0);
}
