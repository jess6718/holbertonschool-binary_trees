#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if the node is a leaf
 * @node: pointer to the node to check
 * Return: 1 for leaf otherwise not a leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)/*when it is a root*/
	{
		return (0);
	}
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	return (0);
}