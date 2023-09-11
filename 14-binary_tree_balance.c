#include "binary_trees.h"

/**
 * count_node - finds nodes of tree
 * @tree: a pointer to the root node of tree
 * Return: success returns total nodes of tree (including root), otherwise 0
 */
size_t count_node(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (tree == NULL)
	{
		return (0);
	}
	lh = count_node(tree->left);
	rh = count_node(tree->right);
	if (lh > rh)
	{
		/*return height of tree which is height of subtree + 1*/
		return (lh + 1);
	}
	/*return height of tree which is height of subtree + 1*/
	return (rh + 1);
}
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
	return (count_node(tree->left) - count_node(tree->right));
}
