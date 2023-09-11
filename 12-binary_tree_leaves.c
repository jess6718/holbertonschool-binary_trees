#include "binary_trees.h"

/**
 * binary_tree_leaves - count leaves of binary tree
 * @tree: a pointer to the root node of the tree
 * Return: success returns leaves counted of tree otherwise 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lb, rb;

	if (tree == NULL)
	{
		return (0);
	}
	/*check whether it is leaf node*/
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	lb = binary_tree_leaves(tree->left);
	rb = binary_tree_leaves(tree->right);
	return (lb + rb);
}
