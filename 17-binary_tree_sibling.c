#include "binary_trees.h"

/**
  * binary_tree_sibling - finds the sibling of a node
  * @node: pointer to the node to find the sibling
  * Return: node of sibling, NULL otherwise
  */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left != NULL && node->parent->right != NULL)
	{
		if (node->parent->left == node)/*check whether left child is node itself*/
		{
			return (node->parent->right);
		}
		return (node->parent->left);
	}
	return (NULL);
}
